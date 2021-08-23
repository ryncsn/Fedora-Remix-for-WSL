// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210505.3

#ifndef WINRT_Windows_ApplicationModel_ConversationalAgent_2_H
#define WINRT_Windows_ApplicationModel_ConversationalAgent_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.ApplicationModel.ConversationalAgent.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::ConversationalAgent
{
    struct __declspec(empty_bases) ActivationSignalDetectionConfiguration : winrt::Windows::ApplicationModel::ConversationalAgent::IActivationSignalDetectionConfiguration
    {
        ActivationSignalDetectionConfiguration(std::nullptr_t) noexcept {}
        ActivationSignalDetectionConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::ConversationalAgent::IActivationSignalDetectionConfiguration(ptr, take_ownership_from_abi) {}
        ActivationSignalDetectionConfiguration(ActivationSignalDetectionConfiguration const&) noexcept = default;
        ActivationSignalDetectionConfiguration(ActivationSignalDetectionConfiguration&&) noexcept = default;
        ActivationSignalDetectionConfiguration& operator=(ActivationSignalDetectionConfiguration const&) & noexcept = default;
        ActivationSignalDetectionConfiguration& operator=(ActivationSignalDetectionConfiguration&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ActivationSignalDetector : winrt::Windows::ApplicationModel::ConversationalAgent::IActivationSignalDetector
    {
        ActivationSignalDetector(std::nullptr_t) noexcept {}
        ActivationSignalDetector(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::ConversationalAgent::IActivationSignalDetector(ptr, take_ownership_from_abi) {}
        ActivationSignalDetector(ActivationSignalDetector const&) noexcept = default;
        ActivationSignalDetector(ActivationSignalDetector&&) noexcept = default;
        ActivationSignalDetector& operator=(ActivationSignalDetector const&) & noexcept = default;
        ActivationSignalDetector& operator=(ActivationSignalDetector&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ConversationalAgentDetectorManager : winrt::Windows::ApplicationModel::ConversationalAgent::IConversationalAgentDetectorManager
    {
        ConversationalAgentDetectorManager(std::nullptr_t) noexcept {}
        ConversationalAgentDetectorManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::ConversationalAgent::IConversationalAgentDetectorManager(ptr, take_ownership_from_abi) {}
        ConversationalAgentDetectorManager(ConversationalAgentDetectorManager const&) noexcept = default;
        ConversationalAgentDetectorManager(ConversationalAgentDetectorManager&&) noexcept = default;
        ConversationalAgentDetectorManager& operator=(ConversationalAgentDetectorManager const&) & noexcept = default;
        ConversationalAgentDetectorManager& operator=(ConversationalAgentDetectorManager&&) & noexcept = default;
        [[nodiscard]] static auto Default();
    };
    struct __declspec(empty_bases) ConversationalAgentSession : winrt::Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSession,
        impl::require<ConversationalAgentSession, winrt::Windows::Foundation::IClosable>
    {
        ConversationalAgentSession(std::nullptr_t) noexcept {}
        ConversationalAgentSession(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSession(ptr, take_ownership_from_abi) {}
        ConversationalAgentSession(ConversationalAgentSession const&) noexcept = default;
        ConversationalAgentSession(ConversationalAgentSession&&) noexcept = default;
        ConversationalAgentSession& operator=(ConversationalAgentSession const&) & noexcept = default;
        ConversationalAgentSession& operator=(ConversationalAgentSession&&) & noexcept = default;
        static auto GetCurrentSessionAsync();
        static auto GetCurrentSessionSync();
    };
    struct __declspec(empty_bases) ConversationalAgentSessionInterruptedEventArgs : winrt::Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSessionInterruptedEventArgs
    {
        ConversationalAgentSessionInterruptedEventArgs(std::nullptr_t) noexcept {}
        ConversationalAgentSessionInterruptedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSessionInterruptedEventArgs(ptr, take_ownership_from_abi) {}
        ConversationalAgentSessionInterruptedEventArgs(ConversationalAgentSessionInterruptedEventArgs const&) noexcept = default;
        ConversationalAgentSessionInterruptedEventArgs(ConversationalAgentSessionInterruptedEventArgs&&) noexcept = default;
        ConversationalAgentSessionInterruptedEventArgs& operator=(ConversationalAgentSessionInterruptedEventArgs const&) & noexcept = default;
        ConversationalAgentSessionInterruptedEventArgs& operator=(ConversationalAgentSessionInterruptedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ConversationalAgentSignal : winrt::Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSignal
    {
        ConversationalAgentSignal(std::nullptr_t) noexcept {}
        ConversationalAgentSignal(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSignal(ptr, take_ownership_from_abi) {}
        ConversationalAgentSignal(ConversationalAgentSignal const&) noexcept = default;
        ConversationalAgentSignal(ConversationalAgentSignal&&) noexcept = default;
        ConversationalAgentSignal& operator=(ConversationalAgentSignal const&) & noexcept = default;
        ConversationalAgentSignal& operator=(ConversationalAgentSignal&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ConversationalAgentSignalDetectedEventArgs : winrt::Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSignalDetectedEventArgs
    {
        ConversationalAgentSignalDetectedEventArgs(std::nullptr_t) noexcept {}
        ConversationalAgentSignalDetectedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSignalDetectedEventArgs(ptr, take_ownership_from_abi) {}
        ConversationalAgentSignalDetectedEventArgs(ConversationalAgentSignalDetectedEventArgs const&) noexcept = default;
        ConversationalAgentSignalDetectedEventArgs(ConversationalAgentSignalDetectedEventArgs&&) noexcept = default;
        ConversationalAgentSignalDetectedEventArgs& operator=(ConversationalAgentSignalDetectedEventArgs const&) & noexcept = default;
        ConversationalAgentSignalDetectedEventArgs& operator=(ConversationalAgentSignalDetectedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ConversationalAgentSystemStateChangedEventArgs : winrt::Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSystemStateChangedEventArgs
    {
        ConversationalAgentSystemStateChangedEventArgs(std::nullptr_t) noexcept {}
        ConversationalAgentSystemStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSystemStateChangedEventArgs(ptr, take_ownership_from_abi) {}
        ConversationalAgentSystemStateChangedEventArgs(ConversationalAgentSystemStateChangedEventArgs const&) noexcept = default;
        ConversationalAgentSystemStateChangedEventArgs(ConversationalAgentSystemStateChangedEventArgs&&) noexcept = default;
        ConversationalAgentSystemStateChangedEventArgs& operator=(ConversationalAgentSystemStateChangedEventArgs const&) & noexcept = default;
        ConversationalAgentSystemStateChangedEventArgs& operator=(ConversationalAgentSystemStateChangedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) DetectionConfigurationAvailabilityChangedEventArgs : winrt::Windows::ApplicationModel::ConversationalAgent::IDetectionConfigurationAvailabilityChangedEventArgs
    {
        DetectionConfigurationAvailabilityChangedEventArgs(std::nullptr_t) noexcept {}
        DetectionConfigurationAvailabilityChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::ConversationalAgent::IDetectionConfigurationAvailabilityChangedEventArgs(ptr, take_ownership_from_abi) {}
        DetectionConfigurationAvailabilityChangedEventArgs(DetectionConfigurationAvailabilityChangedEventArgs const&) noexcept = default;
        DetectionConfigurationAvailabilityChangedEventArgs(DetectionConfigurationAvailabilityChangedEventArgs&&) noexcept = default;
        DetectionConfigurationAvailabilityChangedEventArgs& operator=(DetectionConfigurationAvailabilityChangedEventArgs const&) & noexcept = default;
        DetectionConfigurationAvailabilityChangedEventArgs& operator=(DetectionConfigurationAvailabilityChangedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) DetectionConfigurationAvailabilityInfo : winrt::Windows::ApplicationModel::ConversationalAgent::IDetectionConfigurationAvailabilityInfo
    {
        DetectionConfigurationAvailabilityInfo(std::nullptr_t) noexcept {}
        DetectionConfigurationAvailabilityInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::ConversationalAgent::IDetectionConfigurationAvailabilityInfo(ptr, take_ownership_from_abi) {}
        DetectionConfigurationAvailabilityInfo(DetectionConfigurationAvailabilityInfo const&) noexcept = default;
        DetectionConfigurationAvailabilityInfo(DetectionConfigurationAvailabilityInfo&&) noexcept = default;
        DetectionConfigurationAvailabilityInfo& operator=(DetectionConfigurationAvailabilityInfo const&) & noexcept = default;
        DetectionConfigurationAvailabilityInfo& operator=(DetectionConfigurationAvailabilityInfo&&) & noexcept = default;
    };
}
#endif