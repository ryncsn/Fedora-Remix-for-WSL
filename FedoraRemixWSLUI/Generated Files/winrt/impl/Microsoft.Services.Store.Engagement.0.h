// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210505.3

#ifndef WINRT_Microsoft_Services_Store_Engagement_0_H
#define WINRT_Microsoft_Services_Store_Engagement_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename K, typename V> struct __declspec(empty_bases) IMap;
}
WINRT_EXPORT namespace winrt::Microsoft::Services::Store::Engagement
{
    enum class StoreServicesEngagementErrorCode : int32_t
    {
        None = 0,
        NetworkConnectionFailure = 1,
        ServerSideError = 3,
        InvalidServerResponse = 4,
        Other = 5,
        Unknown = 6,
        Canceled = 7,
        FileOperationFailure = 8,
        ValidationFailure = 9,
    };
    struct IStoreServicesCustomEventLogger;
    struct IStoreServicesCustomEventLoggerStatics;
    struct IStoreServicesEngagementManager;
    struct IStoreServicesEngagementManager2;
    struct IStoreServicesEngagementManagerStatics;
    struct IStoreServicesExperimentVariation;
    struct IStoreServicesExperimentVariationResult;
    struct IStoreServicesExperimentVariationStatics;
    struct IStoreServicesFeedbackLauncher;
    struct IStoreServicesFeedbackLauncherStatics;
    struct IStoreServicesNotificationChannelParameters;
    struct IStoreServicesNotificationChannelRegistrationResult;
    struct StoreServicesCustomEventLogger;
    struct StoreServicesEngagementManager;
    struct StoreServicesExperimentVariation;
    struct StoreServicesExperimentVariationResult;
    struct StoreServicesFeedbackLauncher;
    struct StoreServicesNotificationChannelParameters;
    struct StoreServicesNotificationChannelRegistrationResult;
}
namespace winrt::impl
{
    template <> struct category<winrt::Microsoft::Services::Store::Engagement::IStoreServicesCustomEventLogger>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Services::Store::Engagement::IStoreServicesCustomEventLoggerStatics>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Services::Store::Engagement::IStoreServicesEngagementManager>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Services::Store::Engagement::IStoreServicesEngagementManager2>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Services::Store::Engagement::IStoreServicesEngagementManagerStatics>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Services::Store::Engagement::IStoreServicesExperimentVariation>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Services::Store::Engagement::IStoreServicesExperimentVariationResult>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Services::Store::Engagement::IStoreServicesExperimentVariationStatics>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Services::Store::Engagement::IStoreServicesFeedbackLauncher>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Services::Store::Engagement::IStoreServicesFeedbackLauncherStatics>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Services::Store::Engagement::IStoreServicesNotificationChannelParameters>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Services::Store::Engagement::IStoreServicesNotificationChannelRegistrationResult>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Services::Store::Engagement::StoreServicesCustomEventLogger>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::Services::Store::Engagement::StoreServicesEngagementManager>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::Services::Store::Engagement::StoreServicesExperimentVariation>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::Services::Store::Engagement::StoreServicesExperimentVariationResult>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::Services::Store::Engagement::StoreServicesFeedbackLauncher>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::Services::Store::Engagement::StoreServicesNotificationChannelParameters>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::Services::Store::Engagement::StoreServicesNotificationChannelRegistrationResult>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::Services::Store::Engagement::StoreServicesEngagementErrorCode>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Microsoft::Services::Store::Engagement::StoreServicesCustomEventLogger> = L"Microsoft.Services.Store.Engagement.StoreServicesCustomEventLogger";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Services::Store::Engagement::StoreServicesEngagementManager> = L"Microsoft.Services.Store.Engagement.StoreServicesEngagementManager";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Services::Store::Engagement::StoreServicesExperimentVariation> = L"Microsoft.Services.Store.Engagement.StoreServicesExperimentVariation";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Services::Store::Engagement::StoreServicesExperimentVariationResult> = L"Microsoft.Services.Store.Engagement.StoreServicesExperimentVariationResult";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Services::Store::Engagement::StoreServicesFeedbackLauncher> = L"Microsoft.Services.Store.Engagement.StoreServicesFeedbackLauncher";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Services::Store::Engagement::StoreServicesNotificationChannelParameters> = L"Microsoft.Services.Store.Engagement.StoreServicesNotificationChannelParameters";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Services::Store::Engagement::StoreServicesNotificationChannelRegistrationResult> = L"Microsoft.Services.Store.Engagement.StoreServicesNotificationChannelRegistrationResult";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Services::Store::Engagement::StoreServicesEngagementErrorCode> = L"Microsoft.Services.Store.Engagement.StoreServicesEngagementErrorCode";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Services::Store::Engagement::IStoreServicesCustomEventLogger> = L"Microsoft.Services.Store.Engagement.IStoreServicesCustomEventLogger";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Services::Store::Engagement::IStoreServicesCustomEventLoggerStatics> = L"Microsoft.Services.Store.Engagement.IStoreServicesCustomEventLoggerStatics";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Services::Store::Engagement::IStoreServicesEngagementManager> = L"Microsoft.Services.Store.Engagement.IStoreServicesEngagementManager";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Services::Store::Engagement::IStoreServicesEngagementManager2> = L"Microsoft.Services.Store.Engagement.IStoreServicesEngagementManager2";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Services::Store::Engagement::IStoreServicesEngagementManagerStatics> = L"Microsoft.Services.Store.Engagement.IStoreServicesEngagementManagerStatics";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Services::Store::Engagement::IStoreServicesExperimentVariation> = L"Microsoft.Services.Store.Engagement.IStoreServicesExperimentVariation";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Services::Store::Engagement::IStoreServicesExperimentVariationResult> = L"Microsoft.Services.Store.Engagement.IStoreServicesExperimentVariationResult";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Services::Store::Engagement::IStoreServicesExperimentVariationStatics> = L"Microsoft.Services.Store.Engagement.IStoreServicesExperimentVariationStatics";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Services::Store::Engagement::IStoreServicesFeedbackLauncher> = L"Microsoft.Services.Store.Engagement.IStoreServicesFeedbackLauncher";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Services::Store::Engagement::IStoreServicesFeedbackLauncherStatics> = L"Microsoft.Services.Store.Engagement.IStoreServicesFeedbackLauncherStatics";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Services::Store::Engagement::IStoreServicesNotificationChannelParameters> = L"Microsoft.Services.Store.Engagement.IStoreServicesNotificationChannelParameters";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Services::Store::Engagement::IStoreServicesNotificationChannelRegistrationResult> = L"Microsoft.Services.Store.Engagement.IStoreServicesNotificationChannelRegistrationResult";
    template <> inline constexpr guid guid_v<winrt::Microsoft::Services::Store::Engagement::IStoreServicesCustomEventLogger>{ 0x6D544721,0xC351,0x3A70,{ 0x95,0xB6,0x16,0x1F,0x52,0xFB,0xC1,0x3D } }; // 6D544721-C351-3A70-95B6-161F52FBC13D
    template <> inline constexpr guid guid_v<winrt::Microsoft::Services::Store::Engagement::IStoreServicesCustomEventLoggerStatics>{ 0x5E9C9D4B,0xA892,0x32F3,{ 0x87,0xAC,0x41,0x0B,0x81,0xF8,0x9C,0xD6 } }; // 5E9C9D4B-A892-32F3-87AC-410B81F89CD6
    template <> inline constexpr guid guid_v<winrt::Microsoft::Services::Store::Engagement::IStoreServicesEngagementManager>{ 0x84538148,0xCE79,0x332C,{ 0xB5,0x8A,0xE6,0x13,0xA3,0x88,0x01,0x90 } }; // 84538148-CE79-332C-B58A-E613A3880190
    template <> inline constexpr guid guid_v<winrt::Microsoft::Services::Store::Engagement::IStoreServicesEngagementManager2>{ 0x8FDC08C7,0x9706,0x448C,{ 0xB1,0x3F,0xDC,0xDA,0x5E,0xD7,0xDC,0x54 } }; // 8FDC08C7-9706-448C-B13F-DCDA5ED7DC54
    template <> inline constexpr guid guid_v<winrt::Microsoft::Services::Store::Engagement::IStoreServicesEngagementManagerStatics>{ 0xF0DC21A7,0x9459,0x376A,{ 0x99,0xF3,0x09,0xAB,0x34,0xEE,0x70,0xC9 } }; // F0DC21A7-9459-376A-99F3-09AB34EE70C9
    template <> inline constexpr guid guid_v<winrt::Microsoft::Services::Store::Engagement::IStoreServicesExperimentVariation>{ 0xA007F897,0x680B,0x3977,{ 0xA5,0xC7,0x69,0xCC,0x52,0xA3,0xF5,0x97 } }; // A007F897-680B-3977-A5C7-69CC52A3F597
    template <> inline constexpr guid guid_v<winrt::Microsoft::Services::Store::Engagement::IStoreServicesExperimentVariationResult>{ 0xBAAEBD73,0x0AFE,0x3D1A,{ 0xAD,0x69,0xA6,0xD0,0x38,0xD5,0xBB,0xBB } }; // BAAEBD73-0AFE-3D1A-AD69-A6D038D5BBBB
    template <> inline constexpr guid guid_v<winrt::Microsoft::Services::Store::Engagement::IStoreServicesExperimentVariationStatics>{ 0x9FD9CE13,0xD2D8,0x45AB,{ 0x8E,0x62,0x03,0x8F,0x24,0x1F,0x08,0x31 } }; // 9FD9CE13-D2D8-45AB-8E62-038F241F0831
    template <> inline constexpr guid guid_v<winrt::Microsoft::Services::Store::Engagement::IStoreServicesFeedbackLauncher>{ 0xD817BED4,0xDBA8,0x3460,{ 0xB1,0x07,0x04,0x5D,0x48,0x91,0x15,0xC6 } }; // D817BED4-DBA8-3460-B107-045D489115C6
    template <> inline constexpr guid guid_v<winrt::Microsoft::Services::Store::Engagement::IStoreServicesFeedbackLauncherStatics>{ 0xF210177C,0xB2DF,0x3840,{ 0x8C,0x7D,0x93,0x7E,0xDD,0x59,0x9B,0x6E } }; // F210177C-B2DF-3840-8C7D-937EDD599B6E
    template <> inline constexpr guid guid_v<winrt::Microsoft::Services::Store::Engagement::IStoreServicesNotificationChannelParameters>{ 0xAC235DAA,0x1E0B,0x4A48,{ 0xA3,0xC5,0xE4,0x76,0x71,0x8A,0x1F,0x10 } }; // AC235DAA-1E0B-4A48-A3C5-E476718A1F10
    template <> inline constexpr guid guid_v<winrt::Microsoft::Services::Store::Engagement::IStoreServicesNotificationChannelRegistrationResult>{ 0x900864FC,0x9EB2,0x3CB6,{ 0xA6,0x6D,0x26,0x8C,0x31,0x41,0x58,0xA9 } }; // 900864FC-9EB2-3CB6-A66D-268C314158A9
    template <> struct default_interface<winrt::Microsoft::Services::Store::Engagement::StoreServicesCustomEventLogger>{ using type = winrt::Microsoft::Services::Store::Engagement::IStoreServicesCustomEventLogger; };
    template <> struct default_interface<winrt::Microsoft::Services::Store::Engagement::StoreServicesEngagementManager>{ using type = winrt::Microsoft::Services::Store::Engagement::IStoreServicesEngagementManager; };
    template <> struct default_interface<winrt::Microsoft::Services::Store::Engagement::StoreServicesExperimentVariation>{ using type = winrt::Microsoft::Services::Store::Engagement::IStoreServicesExperimentVariation; };
    template <> struct default_interface<winrt::Microsoft::Services::Store::Engagement::StoreServicesExperimentVariationResult>{ using type = winrt::Microsoft::Services::Store::Engagement::IStoreServicesExperimentVariationResult; };
    template <> struct default_interface<winrt::Microsoft::Services::Store::Engagement::StoreServicesFeedbackLauncher>{ using type = winrt::Microsoft::Services::Store::Engagement::IStoreServicesFeedbackLauncher; };
    template <> struct default_interface<winrt::Microsoft::Services::Store::Engagement::StoreServicesNotificationChannelParameters>{ using type = winrt::Microsoft::Services::Store::Engagement::IStoreServicesNotificationChannelParameters; };
    template <> struct default_interface<winrt::Microsoft::Services::Store::Engagement::StoreServicesNotificationChannelRegistrationResult>{ using type = winrt::Microsoft::Services::Store::Engagement::IStoreServicesNotificationChannelRegistrationResult; };
    template <> struct abi<winrt::Microsoft::Services::Store::Engagement::IStoreServicesCustomEventLogger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Log(void*) noexcept = 0;
            virtual int32_t __stdcall LogForVariation(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Services::Store::Engagement::IStoreServicesCustomEventLoggerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Services::Store::Engagement::IStoreServicesEngagementManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RegisterNotificationChannelAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RegisterNotificationChannelWithParametersAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ParseArgumentsAndTrackAppLaunch(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Services::Store::Engagement::IStoreServicesEngagementManager2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall UnregisterNotificationChannelAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Services::Store::Engagement::IStoreServicesEngagementManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Services::Store::Engagement::IStoreServicesExperimentVariation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExperimentId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExperimentName(void**) noexcept = 0;
            virtual int32_t __stdcall get_VariationId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExperimentProjectId(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsStale(bool*) noexcept = 0;
            virtual int32_t __stdcall GetString(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetBoolean(void*, bool, bool*) noexcept = 0;
            virtual int32_t __stdcall GetDouble(void*, double, double*) noexcept = 0;
            virtual int32_t __stdcall GetInt32(void*, int32_t, int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Services::Store::Engagement::IStoreServicesExperimentVariationResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ErrorCode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ErrorMessage(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExperimentVariation(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Services::Store::Engagement::IStoreServicesExperimentVariationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCachedVariationAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetRefreshedVariationAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Services::Store::Engagement::IStoreServicesFeedbackLauncher>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall LaunchAsync(void**) noexcept = 0;
            virtual int32_t __stdcall LaunchWithInputDataAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Services::Store::Engagement::IStoreServicesFeedbackLauncherStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
            virtual int32_t __stdcall IsSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Services::Store::Engagement::IStoreServicesNotificationChannelParameters>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CustomUserId(void**) noexcept = 0;
            virtual int32_t __stdcall put_CustomUserId(void*) noexcept = 0;
            virtual int32_t __stdcall get_CustomSystemId(void**) noexcept = 0;
            virtual int32_t __stdcall put_CustomSystemId(void*) noexcept = 0;
            virtual int32_t __stdcall get_CustomNotificationChannelUri(void**) noexcept = 0;
            virtual int32_t __stdcall put_CustomNotificationChannelUri(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Services::Store::Engagement::IStoreServicesNotificationChannelRegistrationResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ErrorCode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ErrorMessage(void**) noexcept = 0;
            virtual int32_t __stdcall get_NotificationChannelUri(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Microsoft_Services_Store_Engagement_IStoreServicesCustomEventLogger
    {
        WINRT_IMPL_AUTO(void) Log(param::hstring const& eventName) const;
        WINRT_IMPL_AUTO(void) LogForVariation(winrt::Microsoft::Services::Store::Engagement::StoreServicesExperimentVariation const& experimentVariation, param::hstring const& eventName) const;
    };
    template <> struct consume<winrt::Microsoft::Services::Store::Engagement::IStoreServicesCustomEventLogger>
    {
        template <typename D> using type = consume_Microsoft_Services_Store_Engagement_IStoreServicesCustomEventLogger<D>;
    };
    template <typename D>
    struct consume_Microsoft_Services_Store_Engagement_IStoreServicesCustomEventLoggerStatics
    {
        WINRT_IMPL_AUTO(winrt::Microsoft::Services::Store::Engagement::StoreServicesCustomEventLogger) GetDefault() const;
    };
    template <> struct consume<winrt::Microsoft::Services::Store::Engagement::IStoreServicesCustomEventLoggerStatics>
    {
        template <typename D> using type = consume_Microsoft_Services_Store_Engagement_IStoreServicesCustomEventLoggerStatics<D>;
    };
    template <typename D>
    struct consume_Microsoft_Services_Store_Engagement_IStoreServicesEngagementManager
    {
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Services::Store::Engagement::StoreServicesNotificationChannelRegistrationResult>) RegisterNotificationChannelAsync() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Services::Store::Engagement::StoreServicesNotificationChannelRegistrationResult>) RegisterNotificationChannelAsync(winrt::Microsoft::Services::Store::Engagement::StoreServicesNotificationChannelParameters const& parameters) const;
        WINRT_IMPL_AUTO(hstring) ParseArgumentsAndTrackAppLaunch(param::hstring const& launchArguments) const;
    };
    template <> struct consume<winrt::Microsoft::Services::Store::Engagement::IStoreServicesEngagementManager>
    {
        template <typename D> using type = consume_Microsoft_Services_Store_Engagement_IStoreServicesEngagementManager<D>;
    };
    template <typename D>
    struct consume_Microsoft_Services_Store_Engagement_IStoreServicesEngagementManager2
    {
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<bool>) UnregisterNotificationChannelAsync() const;
    };
    template <> struct consume<winrt::Microsoft::Services::Store::Engagement::IStoreServicesEngagementManager2>
    {
        template <typename D> using type = consume_Microsoft_Services_Store_Engagement_IStoreServicesEngagementManager2<D>;
    };
    template <typename D>
    struct consume_Microsoft_Services_Store_Engagement_IStoreServicesEngagementManagerStatics
    {
        WINRT_IMPL_AUTO(winrt::Microsoft::Services::Store::Engagement::StoreServicesEngagementManager) GetDefault() const;
    };
    template <> struct consume<winrt::Microsoft::Services::Store::Engagement::IStoreServicesEngagementManagerStatics>
    {
        template <typename D> using type = consume_Microsoft_Services_Store_Engagement_IStoreServicesEngagementManagerStatics<D>;
    };
    template <typename D>
    struct consume_Microsoft_Services_Store_Engagement_IStoreServicesExperimentVariation
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ExperimentId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ExperimentName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) VariationId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ExperimentProjectId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsStale() const;
        WINRT_IMPL_AUTO(hstring) GetString(param::hstring const& name, param::hstring const& defaultValue) const;
        WINRT_IMPL_AUTO(bool) GetBoolean(param::hstring const& name, bool defaultValue) const;
        WINRT_IMPL_AUTO(double) GetDouble(param::hstring const& name, double defaultValue) const;
        WINRT_IMPL_AUTO(int32_t) GetInt32(param::hstring const& name, int32_t defaultValue) const;
    };
    template <> struct consume<winrt::Microsoft::Services::Store::Engagement::IStoreServicesExperimentVariation>
    {
        template <typename D> using type = consume_Microsoft_Services_Store_Engagement_IStoreServicesExperimentVariation<D>;
    };
    template <typename D>
    struct consume_Microsoft_Services_Store_Engagement_IStoreServicesExperimentVariationResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Microsoft::Services::Store::Engagement::StoreServicesEngagementErrorCode) ErrorCode() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ErrorMessage() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Microsoft::Services::Store::Engagement::StoreServicesExperimentVariation) ExperimentVariation() const;
    };
    template <> struct consume<winrt::Microsoft::Services::Store::Engagement::IStoreServicesExperimentVariationResult>
    {
        template <typename D> using type = consume_Microsoft_Services_Store_Engagement_IStoreServicesExperimentVariationResult<D>;
    };
    template <typename D>
    struct consume_Microsoft_Services_Store_Engagement_IStoreServicesExperimentVariationStatics
    {
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Services::Store::Engagement::StoreServicesExperimentVariationResult>) GetCachedVariationAsync(param::hstring const& experimentProjectId) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Services::Store::Engagement::StoreServicesExperimentVariationResult>) GetRefreshedVariationAsync(param::hstring const& experimentProjectId) const;
    };
    template <> struct consume<winrt::Microsoft::Services::Store::Engagement::IStoreServicesExperimentVariationStatics>
    {
        template <typename D> using type = consume_Microsoft_Services_Store_Engagement_IStoreServicesExperimentVariationStatics<D>;
    };
    template <typename D>
    struct consume_Microsoft_Services_Store_Engagement_IStoreServicesFeedbackLauncher
    {
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<bool>) LaunchAsync() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<bool>) LaunchAsync(param::map<hstring, hstring> const& inputData) const;
    };
    template <> struct consume<winrt::Microsoft::Services::Store::Engagement::IStoreServicesFeedbackLauncher>
    {
        template <typename D> using type = consume_Microsoft_Services_Store_Engagement_IStoreServicesFeedbackLauncher<D>;
    };
    template <typename D>
    struct consume_Microsoft_Services_Store_Engagement_IStoreServicesFeedbackLauncherStatics
    {
        WINRT_IMPL_AUTO(winrt::Microsoft::Services::Store::Engagement::StoreServicesFeedbackLauncher) GetDefault() const;
        WINRT_IMPL_AUTO(bool) IsSupported() const;
    };
    template <> struct consume<winrt::Microsoft::Services::Store::Engagement::IStoreServicesFeedbackLauncherStatics>
    {
        template <typename D> using type = consume_Microsoft_Services_Store_Engagement_IStoreServicesFeedbackLauncherStatics<D>;
    };
    template <typename D>
    struct consume_Microsoft_Services_Store_Engagement_IStoreServicesNotificationChannelParameters
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) CustomUserId() const;
        WINRT_IMPL_AUTO(void) CustomUserId(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) CustomSystemId() const;
        WINRT_IMPL_AUTO(void) CustomSystemId(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) CustomNotificationChannelUri() const;
        WINRT_IMPL_AUTO(void) CustomNotificationChannelUri(param::hstring const& value) const;
    };
    template <> struct consume<winrt::Microsoft::Services::Store::Engagement::IStoreServicesNotificationChannelParameters>
    {
        template <typename D> using type = consume_Microsoft_Services_Store_Engagement_IStoreServicesNotificationChannelParameters<D>;
    };
    template <typename D>
    struct consume_Microsoft_Services_Store_Engagement_IStoreServicesNotificationChannelRegistrationResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Microsoft::Services::Store::Engagement::StoreServicesEngagementErrorCode) ErrorCode() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ErrorMessage() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) NotificationChannelUri() const;
    };
    template <> struct consume<winrt::Microsoft::Services::Store::Engagement::IStoreServicesNotificationChannelRegistrationResult>
    {
        template <typename D> using type = consume_Microsoft_Services_Store_Engagement_IStoreServicesNotificationChannelRegistrationResult<D>;
    };
}
#endif