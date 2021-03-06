#pragma once
#include "Stdafx.h"

namespace SpotiFire {

    
    ///-------------------------------------------------------------------------------------------------
    /// <summary>	Values that errors given from libspotify can have. </summary>
    ///
    /// <remarks>	Aleksander, 19.10.2012. </remarks>
    ///-------------------------------------------------------------------------------------------------
    public enum class Error
    {
        /// <summary>
        /// No errors encountered
        /// </summary>
        OK = 0,

        /// <summary>
        /// The library version targeted does not match the one you claim you support
        /// </summary>
        BAD_API_VERSION = 1,

        /// <summary>
        /// Initialization of library failed - are cache locations etc. valid?
        /// </summary>
        API_INITIALIZATION_FAILED = 2,

        /// <summary>
        /// The track specified for playing cannot be played
        /// </summary>
        TRACK_NOT_PLAYABLE = 3,

        /// <summary>
        /// The application key is invalid
        /// </summary>
        BAD_APPLICATION_KEY = 5,

        /// <summary>
        /// Login failed because of bad username and/or password
        /// </summary>
        BAD_USERNAME_OR_PASSWORD = 6,

        /// <summary>
        /// The specified username is banned
        /// </summary>
        USER_BANNED = 7,

        /// <summary>
        /// Cannot connect to the Spotify backend system
        /// </summary>
        UNABLE_TO_CONTACT_SERVER = 8,

        /// <summary>
        /// Client is too old, library will need to be updated
        /// </summary>
        CLIENT_TOO_OLD = 9,

        /// <summary>
        /// Some other error occurred, and it is permanent (e.g. trying to relogin will not help)
        /// </summary>
        OTHER_PERMANENT = 10,

        /// <summary>
        /// The user agent string is invalid or too long
        /// </summary>
        BAD_USER_AGENT = 11,

        /// <summary>
        /// No valid callback registered to handle events
        /// </summary>
        MISSING_CALLBACK = 12,

        /// <summary>
        /// Input data was either missing or invalid
        /// </summary>
        INVALID_INDATA = 13,

        /// <summary>
        /// Index out of range
        /// </summary>
        INDEX_OUT_OF_RANGE = 14,

        /// <summary>
        /// The specified user needs a premium account
        /// </summary>
        USER_NEEDS_PREMIUM = 15,

        /// <summary>
        /// A transient error occurred.
        /// </summary>
        OTHER_TRANSIENT = 16,

        /// <summary>
        /// The resource is currently loading
        /// </summary>
        IS_LOADING = 17,

        /// <summary>
        /// Could not find any suitable stream to play
        /// </summary>
        NO_STREAM_AVAILABLE = 18,

        /// <summary>
        /// Requested operation is not allowed
        /// </summary>
        PERMISSION_DENIED = 19,

        /// <summary>
        /// Target inbox is full
        /// </summary>
        INBOX_IS_FULL = 20,

        /// <summary>
        /// Cache is not enabled
        /// </summary>
        NO_CACHE = 21,

        /// <summary>
        /// Requested user does not exist
        /// </summary>
        NO_SUCH_USER = 22,

        /// <summary>
        /// No credentials are stored
        /// </summary>
        NO_CREDENTIALS = 23,

        /// <summary>
        /// Network disabled
        /// </summary>
        NETWORK_DISABLED = 24,

        /// <summary>
        /// Invalid device ID
        /// </summary>
        INVALID_DEVICE_ID = 25,

        /// <summary>
        /// Unable to open trace file
        /// </summary>
        CANT_OPEN_TRACE_FILE = 26,

        /// <summary>
        /// This application is no longer allowed to use the Spotify service
        /// </summary>
        APPLICATION_BANNED = 27,

        /// <summary>
        /// Reached the device limit for number of tracks to download
        /// </summary>
        OFFLINE_TOO_MANY_TRACKS = 31,

        /// <summary>
        /// Disk cache is full so no more tracks can be downloaded to offline mode
        /// </summary>
        OFFLINE_DISK_CACHE = 32,

        /// <summary>
        /// Offline key has expired, the user needs to go online again
        /// </summary>
        OFFLINE_EXPIRED = 33,

        /// <summary>
        /// This user is not allowed to use offline mode
        /// </summary>
        OFFLINE_NOT_ALLOWED = 34,

        /// <summary>
        /// The license for this device has been lost. Most likely because the user used offline on three other device
        /// </summary>
        OFFLINE_LICENSE_LOST = 35,

        /// <summary>
        /// The Spotify license server does not respond correctly
        /// </summary>
        OFFLINE_LICENSE_ERROR = 36,

        /// <summary>
        /// A LastFM scrobble authentication error has occurred
        /// </summary>
        LASTFM_AUTH_ERROR = 39,

        /// <summary>
        /// An invalid argument was specified
        /// </summary>
        INVALID_ARGUMENT = 40,

        /// <summary>
        /// An operating system error
        /// </summary>
        SYSTEM_FAILURE = 41,
    };

    ///-------------------------------------------------------------------------------------------------
    /// <summary>	Values that represent album types. </summary>
    ///
    /// <remarks>	Aleksander, 20.10.2012. </remarks>
    ///-------------------------------------------------------------------------------------------------
    public enum class AlbumType
    {
        /// <summary>	An enum constant representing the album option. </summary>
        Album = 0,
        /// <summary>	An enum constant representing the single option. </summary>
        Single = 1,
        /// <summary>	An enum constant representing the compilation option. </summary>
        Compilation = 2,
        /// <summary>	An enum constant representing the unknown option. </summary>
        Unknown = 3
    };

    ///-------------------------------------------------------------------------------------------------
    /// <summary>	Values that represent different bitrates. </summary>
    ///
    /// <remarks>	Aleksander, 20.10.2012. </remarks>
    ///-------------------------------------------------------------------------------------------------
    public enum class BitRate
    {
        /// <summary>	Bitrate 160kbps. </summary>
        Bitrate160k = 0,

        /// <summary>	Bitrate 320kbps. </summary>
        Bitrate320k = 1,

        /// <summary>	Bitrate 96kbps. </summary>
        Bitrate96k = 2
    };

    ///-------------------------------------------------------------------------------------------------
    /// <summary>	Values that represent a state of connection. </summary>
    ///
    /// <remarks>	Aleksander, 20.10.2012. </remarks>
    ///-------------------------------------------------------------------------------------------------
    public enum class ConnectionState
    {
        /// <summary>
        /// User not yet logged in.
        /// </summary>
        LoggedOut = 0,

        /// <summary>
        /// Logged in against a Spotify access point.
        /// </summary>
        LoggedIn = 1,

        /// <summary>
        /// Was logged in, but has now been disconnected.
        /// </summary>
        Disconnected = 2,

        /// <summary>
        /// The connection state is undefined.
        /// </summary>
        Undefined = 3,

        /// <summary>
        /// Logged in in offline mode.
        /// </summary>
        Offline = 4
    };

    ///-------------------------------------------------------------------------------------------------
    /// <summary>	Values that represent the format of an image. </summary>
    ///
    /// <remarks>	Aleksander, 31.10.2012. </remarks>
    ///-------------------------------------------------------------------------------------------------
    public enum class ImageFormat
    {
        /// <summary>	Unknown image format. </summary>
        Unknown = -1,

        /// <summary>	JPEG image. </summary>
        Jpeg = 0,
    };

    ///-------------------------------------------------------------------------------------------------
    /// <summary>	Values that represent link types. </summary>
    ///
    /// <remarks>	Aleksander, 31.10.2012. </remarks>
    ///-------------------------------------------------------------------------------------------------
    public enum class LinkType
    {
        /// <summary>	Link type not valid - default until the library has parsed the link, or when parsing failed. </summary>
        Invalid = 0,
        /// <summary>	An enum constant representing the track option. </summary>
        Track = 1,
        /// <summary>	An enum constant representing the album option. </summary>
        Album = 2,
        /// <summary>	An enum constant representing the artist option. </summary>
        Artist = 3,
        /// <summary>	An enum constant representing the search option. </summary>
        Search = 4,
        /// <summary>	An enum constant representing the playlist option. </summary>
        Playlist = 5,
        /// <summary>	An enum constant representing the profile option. </summary>
        Profile = 6,
        /// <summary>	An enum constant representing the starred option. </summary>
        Starred = 7,
        /// <summary>	An enum constant representing the localtrack option. </summary>
        Localtrack = 8,
        /// <summary>	An enum constant representing the image option. </summary>
        Image = 9
    };

    ///-------------------------------------------------------------------------------------------------
    /// <summary>	Values that represent the size of an image. </summary>
    ///
    /// <remarks>	Aleksander, 31.10.2012. </remarks>
    ///-------------------------------------------------------------------------------------------------
    public enum class ImageSize
    {
        /// <summary>	An enum constant representing the normal option. </summary>
        Normal = 0,
        /// <summary>	An enum constant representing the small option. </summary>
        Small = 1,
        /// <summary>	An enum constant representing the large option. </summary>
        Large = 2
    };

    ///-------------------------------------------------------------------------------------------------
    /// <summary>	Values that represent offline status of a playlist. </summary>
    ///
    /// <remarks>	Aleksander, 31.10.2012. </remarks>
    ///-------------------------------------------------------------------------------------------------
    public enum class OfflineStatus
    {
        /// <summary>	Playlist is not offline enabled. </summary>
        No = 0,

        /// <summary>	Playlist is synchronized to local storage. </summary>
        Yes = 1,

        /// <summary>	Playlist is currently downloading. Only one playlist can be in this state at any given time. </summary>
        Downloading = 2,

        /// <summary>	Playlist is queued for download. </summary>
        Waiting = 3
    };

    ///-------------------------------------------------------------------------------------------------
    /// <summary>	Values that represent type of playlist. </summary>
    ///
    /// <remarks>	Aleksander, 01.11.2012. </remarks>
    ///-------------------------------------------------------------------------------------------------
    public enum class PlaylistType
    {
        Playlist = 0,
        StartFolder = 1,
        EndFolder = 2,
        Placeholder = 3
    };

    ///-------------------------------------------------------------------------------------------------
    /// <summary>	Values that represent track availability. </summary>
    ///
    /// <remarks>	Aleksander, 02.11.2012. </remarks>
    ///-------------------------------------------------------------------------------------------------
    public enum class TrackAvailability
    {
        /// <summary>	Track is not available. </summary>
        Unavailable = 0,

        /// <summary>	Track is available and can be played. </summary>
        Available = 1,

        /// <summary>	Track can not be streamed using this account. </summary>
        NotStreamable = 2,

        /// <summary>	Track not available on artist's request. </summary>
        BannedByArtist = 3,
    };

    ///-------------------------------------------------------------------------------------------------
    /// <summary>	Values that represent type of search. </summary>
    ///
    /// <remarks>	Aleksander, 03.11.2012. </remarks>
    ///-------------------------------------------------------------------------------------------------
    public enum class SearchType
    {
        Standard = 0,
        Suggest = 1,
    };

    ///-------------------------------------------------------------------------------------------------
    /// <summary>	Values that represent type of artist-browse. </summary>
    ///
    /// <remarks>	Aleksander, 29.01.2013. </remarks>
    ///-------------------------------------------------------------------------------------------------
    public enum class ArtistBrowseType
    {
        /// <summary>	An enum constant representing the full option (depricated). </summary>
        Full = 0,
        /// <summary>	An enum constant representing the no tracks option. </summary>
        NoTracks = 1,
        /// <summary>	An enum constant representing the no albums option. </summary>
        NoAlbums = 2,
    };

    ///-------------------------------------------------------------------------------------------------
    /// <summary>	Values that represent a type of internet-connection. </summary>
    ///
    /// <remarks>	Aleksander, 24.02.2013. </remarks>
    ///-------------------------------------------------------------------------------------------------
    public enum class ConnectionType
    {
        /// <summary>	An enum constant representing the unknown option. </summary>
        Unknown,
        /// <summary>	An enum constant representing the none option. </summary>
        None,
        /// <summary>	An enum constant representing the mobile option. </summary>
        Mobile,
        /// <summary>	An enum constant representing the mobile roaming option. </summary>
        MobileRoaming,
        /// <summary>	An enum constant representing the wifi option. </summary>
        Wifi,
        /// <summary>	An enum constant representing the wired option. </summary>
        Wired
    };

    ///-------------------------------------------------------------------------------------------------
    /// <summary>	Values that represent connection rules.  </summary>
    ///
    /// <remarks>	Connection rules, bitwise OR of flags. The default is The default is Network | AllowSync. </remarks>
    ///-------------------------------------------------------------------------------------------------
    [System::Flags]
    public enum class ConnectionRules
    {
        /// <summary>	An enum constant representing the none option. </summary>
        None = 0x0,
        /// <summary>	An enum constant representing the network option. </summary>
        Network = 0x1,
        /// <summary>	An enum constant representing the network if roaming option. </summary>
        NetworkIfRoaming = 0x2,
        /// <summary>	An enum constant representing the allow synchronise over mobile option. </summary>
        AllowSyncOverMobile = 0x4,
        /// <summary>	An enum constant representing the allow synchronise over wifi option. </summary>
        AllowSyncOverWifi = 0x8
    };

    ///-------------------------------------------------------------------------------------------------
    /// <summary>	Values that represent a social provider. </summary>
    ///
    /// <remarks>	Aleksander, 24.02.2013. </remarks>
    ///-------------------------------------------------------------------------------------------------
    public enum class SocialProvider
    {
        /// <summary>	An enum constant representing the spotify option. </summary>
        Spotify,
        /// <summary>	An enum constant representing the facebook option. </summary>
        Facebook,
        /// <summary>	An enum constant representing the last fm option. </summary>
        LastFm
    };

    ///-------------------------------------------------------------------------------------------------
    /// <summary>	Values that represent scrobbing states. </summary>
    ///
    /// <remarks>	Aleksander, 24.02.2013. </remarks>
    ///-------------------------------------------------------------------------------------------------
    public enum class ScrobblingState
    {
        UseGlobalSetting = 0,
        LocalEnabled,
        LocalDisabled,
        GlobalEnabled,
        GlobalDisabled
    };

    ///-------------------------------------------------------------------------------------------------
    /// <summary>	Values that represent toplist types. </summary>
    ///
    /// <remarks>	Aleksander, 09.05.2013. </remarks>
    ///-------------------------------------------------------------------------------------------------
    public enum class ToplistType {
        /// <summary>	An enum constant representing the artists option. </summary>
        Artists = 0,
        /// <summary>	An enum constant representing the albums option. </summary>
        Albums = 1,
        /// <summary>	An enum constant representing the tracks option. </summary>
        Tracks = 2
    };

    ///-------------------------------------------------------------------------------------------------
    /// <summary>	Values that represent toplist region. </summary>
    ///
    /// <remarks>	Aleksander, 09.05.2013. </remarks>
    ///-------------------------------------------------------------------------------------------------
    public enum class ToplistRegion {
        /// <summary>	Global toplist. </summary>
        Everywhere = 0,
        /// <summary>	Toplist for a given user. </summary>
        User = 1
    };
}