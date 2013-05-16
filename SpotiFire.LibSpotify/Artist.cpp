#include "stdafx.h"

#include "Artist.h"
#define SP_TYPE(type_name, ptrPtr) (type_name *)(void *)ptrPtr

Artist::Artist(SpotiFire::Session ^session, sp_artist *ptr) {
	SPLock lock;
	_ptr = ptr;
	_session = session;
	sp_artist_add_ref(_ptr);
}

Artist::~Artist() {
	this->!Artist();
}

Artist::!Artist() {
	SPLock lock;
	sp_artist_release(_ptr);
	_ptr = NULL;
}

Session ^Artist::Session::get() {
	return _session;
}

bool Artist::IsReady::get() {
	SPLock lock;
	const char *name = sp_artist_name(_ptr);
	return name != NULL && strlen(name) > 0;
}

bool Artist::IsLoaded::get() {
	SPLock lock;
	return sp_artist_is_loaded(_ptr);
}

String ^Artist::Name::get() {
	SPLock lock;
	return UTF8(sp_artist_name(_ptr));
}

ArtistBrowse ^Artist::Browse(ArtistBrowseType type) {
	return ArtistBrowse::Create(_session, this, type);
}

int Artist::GetHashCode() {
	SPLock lock;
	return (new IntPtr(_ptr))->GetHashCode();
}

bool Artist::Equals(Object^ other) {
	SPLock lock;
	return other != nullptr && GetType() == other->GetType() && GetHashCode() == other->GetHashCode();
}

bool SpotiFire::operator== (Artist^ left, Artist^ right) {
	SPLock lock;
	return Object::ReferenceEquals(left, right) || (!Object::ReferenceEquals(left, nullptr) && left->Equals(right));
}

bool SpotiFire::operator!= (Artist^ left, Artist^ right) {
	SPLock lock;
	return !(left == right);
}