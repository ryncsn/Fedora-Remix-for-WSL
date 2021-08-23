// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210505.3

#ifndef WINRT_Windows_Media_SpeechRecognition_2_H
#define WINRT_Windows_Media_SpeechRecognition_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Globalization.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Media.SpeechRecognition.1.h"
WINRT_EXPORT namespace winrt::Windows::Media::SpeechRecognition
{
    struct __declspec(empty_bases) SpeechContinuousRecognitionCompletedEventArgs : winrt::Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionCompletedEventArgs
    {
        SpeechContinuousRecognitionCompletedEventArgs(std::nullptr_t) noexcept {}
        SpeechContinuousRecognitionCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionCompletedEventArgs(ptr, take_ownership_from_abi) {}
        SpeechContinuousRecognitionCompletedEventArgs(SpeechContinuousRecognitionCompletedEventArgs const&) noexcept = default;
        SpeechContinuousRecognitionCompletedEventArgs(SpeechContinuousRecognitionCompletedEventArgs&&) noexcept = default;
        SpeechContinuousRecognitionCompletedEventArgs& operator=(SpeechContinuousRecognitionCompletedEventArgs const&) & noexcept = default;
        SpeechContinuousRecognitionCompletedEventArgs& operator=(SpeechContinuousRecognitionCompletedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SpeechContinuousRecognitionResultGeneratedEventArgs : winrt::Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionResultGeneratedEventArgs
    {
        SpeechContinuousRecognitionResultGeneratedEventArgs(std::nullptr_t) noexcept {}
        SpeechContinuousRecognitionResultGeneratedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionResultGeneratedEventArgs(ptr, take_ownership_from_abi) {}
        SpeechContinuousRecognitionResultGeneratedEventArgs(SpeechContinuousRecognitionResultGeneratedEventArgs const&) noexcept = default;
        SpeechContinuousRecognitionResultGeneratedEventArgs(SpeechContinuousRecognitionResultGeneratedEventArgs&&) noexcept = default;
        SpeechContinuousRecognitionResultGeneratedEventArgs& operator=(SpeechContinuousRecognitionResultGeneratedEventArgs const&) & noexcept = default;
        SpeechContinuousRecognitionResultGeneratedEventArgs& operator=(SpeechContinuousRecognitionResultGeneratedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SpeechContinuousRecognitionSession : winrt::Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession
    {
        SpeechContinuousRecognitionSession(std::nullptr_t) noexcept {}
        SpeechContinuousRecognitionSession(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession(ptr, take_ownership_from_abi) {}
        SpeechContinuousRecognitionSession(SpeechContinuousRecognitionSession const&) noexcept = default;
        SpeechContinuousRecognitionSession(SpeechContinuousRecognitionSession&&) noexcept = default;
        SpeechContinuousRecognitionSession& operator=(SpeechContinuousRecognitionSession const&) & noexcept = default;
        SpeechContinuousRecognitionSession& operator=(SpeechContinuousRecognitionSession&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SpeechRecognitionCompilationResult : winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionCompilationResult
    {
        SpeechRecognitionCompilationResult(std::nullptr_t) noexcept {}
        SpeechRecognitionCompilationResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionCompilationResult(ptr, take_ownership_from_abi) {}
        SpeechRecognitionCompilationResult(SpeechRecognitionCompilationResult const&) noexcept = default;
        SpeechRecognitionCompilationResult(SpeechRecognitionCompilationResult&&) noexcept = default;
        SpeechRecognitionCompilationResult& operator=(SpeechRecognitionCompilationResult const&) & noexcept = default;
        SpeechRecognitionCompilationResult& operator=(SpeechRecognitionCompilationResult&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SpeechRecognitionGrammarFileConstraint : winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraint
    {
        SpeechRecognitionGrammarFileConstraint(std::nullptr_t) noexcept {}
        SpeechRecognitionGrammarFileConstraint(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraint(ptr, take_ownership_from_abi) {}
        explicit SpeechRecognitionGrammarFileConstraint(winrt::Windows::Storage::StorageFile const& file);
        SpeechRecognitionGrammarFileConstraint(winrt::Windows::Storage::StorageFile const& file, param::hstring const& tag);
        SpeechRecognitionGrammarFileConstraint(SpeechRecognitionGrammarFileConstraint const&) noexcept = default;
        SpeechRecognitionGrammarFileConstraint(SpeechRecognitionGrammarFileConstraint&&) noexcept = default;
        SpeechRecognitionGrammarFileConstraint& operator=(SpeechRecognitionGrammarFileConstraint const&) & noexcept = default;
        SpeechRecognitionGrammarFileConstraint& operator=(SpeechRecognitionGrammarFileConstraint&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SpeechRecognitionHypothesis : winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesis
    {
        SpeechRecognitionHypothesis(std::nullptr_t) noexcept {}
        SpeechRecognitionHypothesis(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesis(ptr, take_ownership_from_abi) {}
        SpeechRecognitionHypothesis(SpeechRecognitionHypothesis const&) noexcept = default;
        SpeechRecognitionHypothesis(SpeechRecognitionHypothesis&&) noexcept = default;
        SpeechRecognitionHypothesis& operator=(SpeechRecognitionHypothesis const&) & noexcept = default;
        SpeechRecognitionHypothesis& operator=(SpeechRecognitionHypothesis&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SpeechRecognitionHypothesisGeneratedEventArgs : winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesisGeneratedEventArgs
    {
        SpeechRecognitionHypothesisGeneratedEventArgs(std::nullptr_t) noexcept {}
        SpeechRecognitionHypothesisGeneratedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesisGeneratedEventArgs(ptr, take_ownership_from_abi) {}
        SpeechRecognitionHypothesisGeneratedEventArgs(SpeechRecognitionHypothesisGeneratedEventArgs const&) noexcept = default;
        SpeechRecognitionHypothesisGeneratedEventArgs(SpeechRecognitionHypothesisGeneratedEventArgs&&) noexcept = default;
        SpeechRecognitionHypothesisGeneratedEventArgs& operator=(SpeechRecognitionHypothesisGeneratedEventArgs const&) & noexcept = default;
        SpeechRecognitionHypothesisGeneratedEventArgs& operator=(SpeechRecognitionHypothesisGeneratedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SpeechRecognitionListConstraint : winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraint
    {
        SpeechRecognitionListConstraint(std::nullptr_t) noexcept {}
        SpeechRecognitionListConstraint(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraint(ptr, take_ownership_from_abi) {}
        explicit SpeechRecognitionListConstraint(param::iterable<hstring> const& commands);
        SpeechRecognitionListConstraint(param::iterable<hstring> const& commands, param::hstring const& tag);
        SpeechRecognitionListConstraint(SpeechRecognitionListConstraint const&) noexcept = default;
        SpeechRecognitionListConstraint(SpeechRecognitionListConstraint&&) noexcept = default;
        SpeechRecognitionListConstraint& operator=(SpeechRecognitionListConstraint const&) & noexcept = default;
        SpeechRecognitionListConstraint& operator=(SpeechRecognitionListConstraint&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SpeechRecognitionQualityDegradingEventArgs : winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionQualityDegradingEventArgs
    {
        SpeechRecognitionQualityDegradingEventArgs(std::nullptr_t) noexcept {}
        SpeechRecognitionQualityDegradingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionQualityDegradingEventArgs(ptr, take_ownership_from_abi) {}
        SpeechRecognitionQualityDegradingEventArgs(SpeechRecognitionQualityDegradingEventArgs const&) noexcept = default;
        SpeechRecognitionQualityDegradingEventArgs(SpeechRecognitionQualityDegradingEventArgs&&) noexcept = default;
        SpeechRecognitionQualityDegradingEventArgs& operator=(SpeechRecognitionQualityDegradingEventArgs const&) & noexcept = default;
        SpeechRecognitionQualityDegradingEventArgs& operator=(SpeechRecognitionQualityDegradingEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SpeechRecognitionResult : winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionResult,
        impl::require<SpeechRecognitionResult, winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionResult2>
    {
        SpeechRecognitionResult(std::nullptr_t) noexcept {}
        SpeechRecognitionResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionResult(ptr, take_ownership_from_abi) {}
        SpeechRecognitionResult(SpeechRecognitionResult const&) noexcept = default;
        SpeechRecognitionResult(SpeechRecognitionResult&&) noexcept = default;
        SpeechRecognitionResult& operator=(SpeechRecognitionResult const&) & noexcept = default;
        SpeechRecognitionResult& operator=(SpeechRecognitionResult&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SpeechRecognitionSemanticInterpretation : winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionSemanticInterpretation
    {
        SpeechRecognitionSemanticInterpretation(std::nullptr_t) noexcept {}
        SpeechRecognitionSemanticInterpretation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionSemanticInterpretation(ptr, take_ownership_from_abi) {}
        SpeechRecognitionSemanticInterpretation(SpeechRecognitionSemanticInterpretation const&) noexcept = default;
        SpeechRecognitionSemanticInterpretation(SpeechRecognitionSemanticInterpretation&&) noexcept = default;
        SpeechRecognitionSemanticInterpretation& operator=(SpeechRecognitionSemanticInterpretation const&) & noexcept = default;
        SpeechRecognitionSemanticInterpretation& operator=(SpeechRecognitionSemanticInterpretation&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SpeechRecognitionTopicConstraint : winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraint
    {
        SpeechRecognitionTopicConstraint(std::nullptr_t) noexcept {}
        SpeechRecognitionTopicConstraint(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraint(ptr, take_ownership_from_abi) {}
        SpeechRecognitionTopicConstraint(winrt::Windows::Media::SpeechRecognition::SpeechRecognitionScenario const& scenario, param::hstring const& topicHint);
        SpeechRecognitionTopicConstraint(winrt::Windows::Media::SpeechRecognition::SpeechRecognitionScenario const& scenario, param::hstring const& topicHint, param::hstring const& tag);
        SpeechRecognitionTopicConstraint(SpeechRecognitionTopicConstraint const&) noexcept = default;
        SpeechRecognitionTopicConstraint(SpeechRecognitionTopicConstraint&&) noexcept = default;
        SpeechRecognitionTopicConstraint& operator=(SpeechRecognitionTopicConstraint const&) & noexcept = default;
        SpeechRecognitionTopicConstraint& operator=(SpeechRecognitionTopicConstraint&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SpeechRecognitionVoiceCommandDefinitionConstraint : winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionVoiceCommandDefinitionConstraint
    {
        SpeechRecognitionVoiceCommandDefinitionConstraint(std::nullptr_t) noexcept {}
        SpeechRecognitionVoiceCommandDefinitionConstraint(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionVoiceCommandDefinitionConstraint(ptr, take_ownership_from_abi) {}
        SpeechRecognitionVoiceCommandDefinitionConstraint(SpeechRecognitionVoiceCommandDefinitionConstraint const&) noexcept = default;
        SpeechRecognitionVoiceCommandDefinitionConstraint(SpeechRecognitionVoiceCommandDefinitionConstraint&&) noexcept = default;
        SpeechRecognitionVoiceCommandDefinitionConstraint& operator=(SpeechRecognitionVoiceCommandDefinitionConstraint const&) & noexcept = default;
        SpeechRecognitionVoiceCommandDefinitionConstraint& operator=(SpeechRecognitionVoiceCommandDefinitionConstraint&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SpeechRecognizer : winrt::Windows::Media::SpeechRecognition::ISpeechRecognizer,
        impl::require<SpeechRecognizer, winrt::Windows::Media::SpeechRecognition::ISpeechRecognizer2>
    {
        SpeechRecognizer(std::nullptr_t) noexcept {}
        SpeechRecognizer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::SpeechRecognition::ISpeechRecognizer(ptr, take_ownership_from_abi) {}
        SpeechRecognizer();
        explicit SpeechRecognizer(winrt::Windows::Globalization::Language const& language);
        SpeechRecognizer(SpeechRecognizer const&) noexcept = default;
        SpeechRecognizer(SpeechRecognizer&&) noexcept = default;
        SpeechRecognizer& operator=(SpeechRecognizer const&) & noexcept = default;
        SpeechRecognizer& operator=(SpeechRecognizer&&) & noexcept = default;
        [[nodiscard]] static auto SystemSpeechLanguage();
        [[nodiscard]] static auto SupportedTopicLanguages();
        [[nodiscard]] static auto SupportedGrammarLanguages();
        static auto TrySetSystemSpeechLanguageAsync(winrt::Windows::Globalization::Language const& speechLanguage);
    };
    struct __declspec(empty_bases) SpeechRecognizerStateChangedEventArgs : winrt::Windows::Media::SpeechRecognition::ISpeechRecognizerStateChangedEventArgs
    {
        SpeechRecognizerStateChangedEventArgs(std::nullptr_t) noexcept {}
        SpeechRecognizerStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::SpeechRecognition::ISpeechRecognizerStateChangedEventArgs(ptr, take_ownership_from_abi) {}
        SpeechRecognizerStateChangedEventArgs(SpeechRecognizerStateChangedEventArgs const&) noexcept = default;
        SpeechRecognizerStateChangedEventArgs(SpeechRecognizerStateChangedEventArgs&&) noexcept = default;
        SpeechRecognizerStateChangedEventArgs& operator=(SpeechRecognizerStateChangedEventArgs const&) & noexcept = default;
        SpeechRecognizerStateChangedEventArgs& operator=(SpeechRecognizerStateChangedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SpeechRecognizerTimeouts : winrt::Windows::Media::SpeechRecognition::ISpeechRecognizerTimeouts
    {
        SpeechRecognizerTimeouts(std::nullptr_t) noexcept {}
        SpeechRecognizerTimeouts(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::SpeechRecognition::ISpeechRecognizerTimeouts(ptr, take_ownership_from_abi) {}
        SpeechRecognizerTimeouts(SpeechRecognizerTimeouts const&) noexcept = default;
        SpeechRecognizerTimeouts(SpeechRecognizerTimeouts&&) noexcept = default;
        SpeechRecognizerTimeouts& operator=(SpeechRecognizerTimeouts const&) & noexcept = default;
        SpeechRecognizerTimeouts& operator=(SpeechRecognizerTimeouts&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SpeechRecognizerUIOptions : winrt::Windows::Media::SpeechRecognition::ISpeechRecognizerUIOptions
    {
        SpeechRecognizerUIOptions(std::nullptr_t) noexcept {}
        SpeechRecognizerUIOptions(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::SpeechRecognition::ISpeechRecognizerUIOptions(ptr, take_ownership_from_abi) {}
        SpeechRecognizerUIOptions(SpeechRecognizerUIOptions const&) noexcept = default;
        SpeechRecognizerUIOptions(SpeechRecognizerUIOptions&&) noexcept = default;
        SpeechRecognizerUIOptions& operator=(SpeechRecognizerUIOptions const&) & noexcept = default;
        SpeechRecognizerUIOptions& operator=(SpeechRecognizerUIOptions&&) & noexcept = default;
    };
}
#endif