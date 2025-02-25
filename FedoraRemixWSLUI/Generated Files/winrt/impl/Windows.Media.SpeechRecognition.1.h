// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210505.3

#ifndef WINRT_Windows_Media_SpeechRecognition_1_H
#define WINRT_Windows_Media_SpeechRecognition_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Media.SpeechRecognition.0.h"
WINRT_EXPORT namespace winrt::Windows::Media::SpeechRecognition
{
    struct __declspec(empty_bases) ISpeechContinuousRecognitionCompletedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechContinuousRecognitionCompletedEventArgs>
    {
        ISpeechContinuousRecognitionCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ISpeechContinuousRecognitionCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISpeechContinuousRecognitionCompletedEventArgs(ISpeechContinuousRecognitionCompletedEventArgs const&) noexcept = default;
        ISpeechContinuousRecognitionCompletedEventArgs(ISpeechContinuousRecognitionCompletedEventArgs&&) noexcept = default;
        ISpeechContinuousRecognitionCompletedEventArgs& operator=(ISpeechContinuousRecognitionCompletedEventArgs const&) & noexcept = default;
        ISpeechContinuousRecognitionCompletedEventArgs& operator=(ISpeechContinuousRecognitionCompletedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISpeechContinuousRecognitionResultGeneratedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechContinuousRecognitionResultGeneratedEventArgs>
    {
        ISpeechContinuousRecognitionResultGeneratedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ISpeechContinuousRecognitionResultGeneratedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISpeechContinuousRecognitionResultGeneratedEventArgs(ISpeechContinuousRecognitionResultGeneratedEventArgs const&) noexcept = default;
        ISpeechContinuousRecognitionResultGeneratedEventArgs(ISpeechContinuousRecognitionResultGeneratedEventArgs&&) noexcept = default;
        ISpeechContinuousRecognitionResultGeneratedEventArgs& operator=(ISpeechContinuousRecognitionResultGeneratedEventArgs const&) & noexcept = default;
        ISpeechContinuousRecognitionResultGeneratedEventArgs& operator=(ISpeechContinuousRecognitionResultGeneratedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISpeechContinuousRecognitionSession :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechContinuousRecognitionSession>
    {
        ISpeechContinuousRecognitionSession(std::nullptr_t = nullptr) noexcept {}
        ISpeechContinuousRecognitionSession(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISpeechContinuousRecognitionSession(ISpeechContinuousRecognitionSession const&) noexcept = default;
        ISpeechContinuousRecognitionSession(ISpeechContinuousRecognitionSession&&) noexcept = default;
        ISpeechContinuousRecognitionSession& operator=(ISpeechContinuousRecognitionSession const&) & noexcept = default;
        ISpeechContinuousRecognitionSession& operator=(ISpeechContinuousRecognitionSession&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISpeechRecognitionCompilationResult :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognitionCompilationResult>
    {
        ISpeechRecognitionCompilationResult(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognitionCompilationResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISpeechRecognitionCompilationResult(ISpeechRecognitionCompilationResult const&) noexcept = default;
        ISpeechRecognitionCompilationResult(ISpeechRecognitionCompilationResult&&) noexcept = default;
        ISpeechRecognitionCompilationResult& operator=(ISpeechRecognitionCompilationResult const&) & noexcept = default;
        ISpeechRecognitionCompilationResult& operator=(ISpeechRecognitionCompilationResult&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISpeechRecognitionConstraint :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognitionConstraint>
    {
        ISpeechRecognitionConstraint(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognitionConstraint(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISpeechRecognitionConstraint(ISpeechRecognitionConstraint const&) noexcept = default;
        ISpeechRecognitionConstraint(ISpeechRecognitionConstraint&&) noexcept = default;
        ISpeechRecognitionConstraint& operator=(ISpeechRecognitionConstraint const&) & noexcept = default;
        ISpeechRecognitionConstraint& operator=(ISpeechRecognitionConstraint&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISpeechRecognitionGrammarFileConstraint :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognitionGrammarFileConstraint>,
        impl::require<winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraint, winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint>
    {
        ISpeechRecognitionGrammarFileConstraint(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognitionGrammarFileConstraint(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISpeechRecognitionGrammarFileConstraint(ISpeechRecognitionGrammarFileConstraint const&) noexcept = default;
        ISpeechRecognitionGrammarFileConstraint(ISpeechRecognitionGrammarFileConstraint&&) noexcept = default;
        ISpeechRecognitionGrammarFileConstraint& operator=(ISpeechRecognitionGrammarFileConstraint const&) & noexcept = default;
        ISpeechRecognitionGrammarFileConstraint& operator=(ISpeechRecognitionGrammarFileConstraint&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISpeechRecognitionGrammarFileConstraintFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognitionGrammarFileConstraintFactory>
    {
        ISpeechRecognitionGrammarFileConstraintFactory(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognitionGrammarFileConstraintFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISpeechRecognitionGrammarFileConstraintFactory(ISpeechRecognitionGrammarFileConstraintFactory const&) noexcept = default;
        ISpeechRecognitionGrammarFileConstraintFactory(ISpeechRecognitionGrammarFileConstraintFactory&&) noexcept = default;
        ISpeechRecognitionGrammarFileConstraintFactory& operator=(ISpeechRecognitionGrammarFileConstraintFactory const&) & noexcept = default;
        ISpeechRecognitionGrammarFileConstraintFactory& operator=(ISpeechRecognitionGrammarFileConstraintFactory&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISpeechRecognitionHypothesis :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognitionHypothesis>
    {
        ISpeechRecognitionHypothesis(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognitionHypothesis(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISpeechRecognitionHypothesis(ISpeechRecognitionHypothesis const&) noexcept = default;
        ISpeechRecognitionHypothesis(ISpeechRecognitionHypothesis&&) noexcept = default;
        ISpeechRecognitionHypothesis& operator=(ISpeechRecognitionHypothesis const&) & noexcept = default;
        ISpeechRecognitionHypothesis& operator=(ISpeechRecognitionHypothesis&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISpeechRecognitionHypothesisGeneratedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognitionHypothesisGeneratedEventArgs>
    {
        ISpeechRecognitionHypothesisGeneratedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognitionHypothesisGeneratedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISpeechRecognitionHypothesisGeneratedEventArgs(ISpeechRecognitionHypothesisGeneratedEventArgs const&) noexcept = default;
        ISpeechRecognitionHypothesisGeneratedEventArgs(ISpeechRecognitionHypothesisGeneratedEventArgs&&) noexcept = default;
        ISpeechRecognitionHypothesisGeneratedEventArgs& operator=(ISpeechRecognitionHypothesisGeneratedEventArgs const&) & noexcept = default;
        ISpeechRecognitionHypothesisGeneratedEventArgs& operator=(ISpeechRecognitionHypothesisGeneratedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISpeechRecognitionListConstraint :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognitionListConstraint>,
        impl::require<winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraint, winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint>
    {
        ISpeechRecognitionListConstraint(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognitionListConstraint(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISpeechRecognitionListConstraint(ISpeechRecognitionListConstraint const&) noexcept = default;
        ISpeechRecognitionListConstraint(ISpeechRecognitionListConstraint&&) noexcept = default;
        ISpeechRecognitionListConstraint& operator=(ISpeechRecognitionListConstraint const&) & noexcept = default;
        ISpeechRecognitionListConstraint& operator=(ISpeechRecognitionListConstraint&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISpeechRecognitionListConstraintFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognitionListConstraintFactory>
    {
        ISpeechRecognitionListConstraintFactory(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognitionListConstraintFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISpeechRecognitionListConstraintFactory(ISpeechRecognitionListConstraintFactory const&) noexcept = default;
        ISpeechRecognitionListConstraintFactory(ISpeechRecognitionListConstraintFactory&&) noexcept = default;
        ISpeechRecognitionListConstraintFactory& operator=(ISpeechRecognitionListConstraintFactory const&) & noexcept = default;
        ISpeechRecognitionListConstraintFactory& operator=(ISpeechRecognitionListConstraintFactory&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISpeechRecognitionQualityDegradingEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognitionQualityDegradingEventArgs>
    {
        ISpeechRecognitionQualityDegradingEventArgs(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognitionQualityDegradingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISpeechRecognitionQualityDegradingEventArgs(ISpeechRecognitionQualityDegradingEventArgs const&) noexcept = default;
        ISpeechRecognitionQualityDegradingEventArgs(ISpeechRecognitionQualityDegradingEventArgs&&) noexcept = default;
        ISpeechRecognitionQualityDegradingEventArgs& operator=(ISpeechRecognitionQualityDegradingEventArgs const&) & noexcept = default;
        ISpeechRecognitionQualityDegradingEventArgs& operator=(ISpeechRecognitionQualityDegradingEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISpeechRecognitionResult :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognitionResult>
    {
        ISpeechRecognitionResult(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognitionResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISpeechRecognitionResult(ISpeechRecognitionResult const&) noexcept = default;
        ISpeechRecognitionResult(ISpeechRecognitionResult&&) noexcept = default;
        ISpeechRecognitionResult& operator=(ISpeechRecognitionResult const&) & noexcept = default;
        ISpeechRecognitionResult& operator=(ISpeechRecognitionResult&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISpeechRecognitionResult2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognitionResult2>
    {
        ISpeechRecognitionResult2(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognitionResult2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISpeechRecognitionResult2(ISpeechRecognitionResult2 const&) noexcept = default;
        ISpeechRecognitionResult2(ISpeechRecognitionResult2&&) noexcept = default;
        ISpeechRecognitionResult2& operator=(ISpeechRecognitionResult2 const&) & noexcept = default;
        ISpeechRecognitionResult2& operator=(ISpeechRecognitionResult2&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISpeechRecognitionSemanticInterpretation :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognitionSemanticInterpretation>
    {
        ISpeechRecognitionSemanticInterpretation(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognitionSemanticInterpretation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISpeechRecognitionSemanticInterpretation(ISpeechRecognitionSemanticInterpretation const&) noexcept = default;
        ISpeechRecognitionSemanticInterpretation(ISpeechRecognitionSemanticInterpretation&&) noexcept = default;
        ISpeechRecognitionSemanticInterpretation& operator=(ISpeechRecognitionSemanticInterpretation const&) & noexcept = default;
        ISpeechRecognitionSemanticInterpretation& operator=(ISpeechRecognitionSemanticInterpretation&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISpeechRecognitionTopicConstraint :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognitionTopicConstraint>,
        impl::require<winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraint, winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint>
    {
        ISpeechRecognitionTopicConstraint(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognitionTopicConstraint(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISpeechRecognitionTopicConstraint(ISpeechRecognitionTopicConstraint const&) noexcept = default;
        ISpeechRecognitionTopicConstraint(ISpeechRecognitionTopicConstraint&&) noexcept = default;
        ISpeechRecognitionTopicConstraint& operator=(ISpeechRecognitionTopicConstraint const&) & noexcept = default;
        ISpeechRecognitionTopicConstraint& operator=(ISpeechRecognitionTopicConstraint&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISpeechRecognitionTopicConstraintFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognitionTopicConstraintFactory>
    {
        ISpeechRecognitionTopicConstraintFactory(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognitionTopicConstraintFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISpeechRecognitionTopicConstraintFactory(ISpeechRecognitionTopicConstraintFactory const&) noexcept = default;
        ISpeechRecognitionTopicConstraintFactory(ISpeechRecognitionTopicConstraintFactory&&) noexcept = default;
        ISpeechRecognitionTopicConstraintFactory& operator=(ISpeechRecognitionTopicConstraintFactory const&) & noexcept = default;
        ISpeechRecognitionTopicConstraintFactory& operator=(ISpeechRecognitionTopicConstraintFactory&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISpeechRecognitionVoiceCommandDefinitionConstraint :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognitionVoiceCommandDefinitionConstraint>,
        impl::require<winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionVoiceCommandDefinitionConstraint, winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint>
    {
        ISpeechRecognitionVoiceCommandDefinitionConstraint(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognitionVoiceCommandDefinitionConstraint(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISpeechRecognitionVoiceCommandDefinitionConstraint(ISpeechRecognitionVoiceCommandDefinitionConstraint const&) noexcept = default;
        ISpeechRecognitionVoiceCommandDefinitionConstraint(ISpeechRecognitionVoiceCommandDefinitionConstraint&&) noexcept = default;
        ISpeechRecognitionVoiceCommandDefinitionConstraint& operator=(ISpeechRecognitionVoiceCommandDefinitionConstraint const&) & noexcept = default;
        ISpeechRecognitionVoiceCommandDefinitionConstraint& operator=(ISpeechRecognitionVoiceCommandDefinitionConstraint&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISpeechRecognizer :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognizer>,
        impl::require<winrt::Windows::Media::SpeechRecognition::ISpeechRecognizer, winrt::Windows::Foundation::IClosable>
    {
        ISpeechRecognizer(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognizer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISpeechRecognizer(ISpeechRecognizer const&) noexcept = default;
        ISpeechRecognizer(ISpeechRecognizer&&) noexcept = default;
        ISpeechRecognizer& operator=(ISpeechRecognizer const&) & noexcept = default;
        ISpeechRecognizer& operator=(ISpeechRecognizer&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISpeechRecognizer2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognizer2>
    {
        ISpeechRecognizer2(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognizer2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISpeechRecognizer2(ISpeechRecognizer2 const&) noexcept = default;
        ISpeechRecognizer2(ISpeechRecognizer2&&) noexcept = default;
        ISpeechRecognizer2& operator=(ISpeechRecognizer2 const&) & noexcept = default;
        ISpeechRecognizer2& operator=(ISpeechRecognizer2&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISpeechRecognizerFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognizerFactory>
    {
        ISpeechRecognizerFactory(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognizerFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISpeechRecognizerFactory(ISpeechRecognizerFactory const&) noexcept = default;
        ISpeechRecognizerFactory(ISpeechRecognizerFactory&&) noexcept = default;
        ISpeechRecognizerFactory& operator=(ISpeechRecognizerFactory const&) & noexcept = default;
        ISpeechRecognizerFactory& operator=(ISpeechRecognizerFactory&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISpeechRecognizerStateChangedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognizerStateChangedEventArgs>
    {
        ISpeechRecognizerStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognizerStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISpeechRecognizerStateChangedEventArgs(ISpeechRecognizerStateChangedEventArgs const&) noexcept = default;
        ISpeechRecognizerStateChangedEventArgs(ISpeechRecognizerStateChangedEventArgs&&) noexcept = default;
        ISpeechRecognizerStateChangedEventArgs& operator=(ISpeechRecognizerStateChangedEventArgs const&) & noexcept = default;
        ISpeechRecognizerStateChangedEventArgs& operator=(ISpeechRecognizerStateChangedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISpeechRecognizerStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognizerStatics>
    {
        ISpeechRecognizerStatics(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognizerStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISpeechRecognizerStatics(ISpeechRecognizerStatics const&) noexcept = default;
        ISpeechRecognizerStatics(ISpeechRecognizerStatics&&) noexcept = default;
        ISpeechRecognizerStatics& operator=(ISpeechRecognizerStatics const&) & noexcept = default;
        ISpeechRecognizerStatics& operator=(ISpeechRecognizerStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISpeechRecognizerStatics2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognizerStatics2>
    {
        ISpeechRecognizerStatics2(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognizerStatics2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISpeechRecognizerStatics2(ISpeechRecognizerStatics2 const&) noexcept = default;
        ISpeechRecognizerStatics2(ISpeechRecognizerStatics2&&) noexcept = default;
        ISpeechRecognizerStatics2& operator=(ISpeechRecognizerStatics2 const&) & noexcept = default;
        ISpeechRecognizerStatics2& operator=(ISpeechRecognizerStatics2&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISpeechRecognizerTimeouts :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognizerTimeouts>
    {
        ISpeechRecognizerTimeouts(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognizerTimeouts(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISpeechRecognizerTimeouts(ISpeechRecognizerTimeouts const&) noexcept = default;
        ISpeechRecognizerTimeouts(ISpeechRecognizerTimeouts&&) noexcept = default;
        ISpeechRecognizerTimeouts& operator=(ISpeechRecognizerTimeouts const&) & noexcept = default;
        ISpeechRecognizerTimeouts& operator=(ISpeechRecognizerTimeouts&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISpeechRecognizerUIOptions :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpeechRecognizerUIOptions>
    {
        ISpeechRecognizerUIOptions(std::nullptr_t = nullptr) noexcept {}
        ISpeechRecognizerUIOptions(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISpeechRecognizerUIOptions(ISpeechRecognizerUIOptions const&) noexcept = default;
        ISpeechRecognizerUIOptions(ISpeechRecognizerUIOptions&&) noexcept = default;
        ISpeechRecognizerUIOptions& operator=(ISpeechRecognizerUIOptions const&) & noexcept = default;
        ISpeechRecognizerUIOptions& operator=(ISpeechRecognizerUIOptions&&) & noexcept = default;
    };
}
#endif
