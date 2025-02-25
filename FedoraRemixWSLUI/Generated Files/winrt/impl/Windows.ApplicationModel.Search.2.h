// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210505.3

#ifndef WINRT_Windows_ApplicationModel_Search_2_H
#define WINRT_Windows_ApplicationModel_Search_2_H
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.ApplicationModel.Search.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Search
{
    struct __declspec(empty_bases) LocalContentSuggestionSettings : winrt::Windows::ApplicationModel::Search::ILocalContentSuggestionSettings
    {
        LocalContentSuggestionSettings(std::nullptr_t) noexcept {}
        LocalContentSuggestionSettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Search::ILocalContentSuggestionSettings(ptr, take_ownership_from_abi) {}
        LocalContentSuggestionSettings();
        LocalContentSuggestionSettings(LocalContentSuggestionSettings const&) noexcept = default;
        LocalContentSuggestionSettings(LocalContentSuggestionSettings&&) noexcept = default;
        LocalContentSuggestionSettings& operator=(LocalContentSuggestionSettings const&) & noexcept = default;
        LocalContentSuggestionSettings& operator=(LocalContentSuggestionSettings&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SearchPaneQueryLinguisticDetails : winrt::Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails
    {
        SearchPaneQueryLinguisticDetails(std::nullptr_t) noexcept {}
        SearchPaneQueryLinguisticDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails(ptr, take_ownership_from_abi) {}
        SearchPaneQueryLinguisticDetails(SearchPaneQueryLinguisticDetails const&) noexcept = default;
        SearchPaneQueryLinguisticDetails(SearchPaneQueryLinguisticDetails&&) noexcept = default;
        SearchPaneQueryLinguisticDetails& operator=(SearchPaneQueryLinguisticDetails const&) & noexcept = default;
        SearchPaneQueryLinguisticDetails& operator=(SearchPaneQueryLinguisticDetails&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SearchQueryLinguisticDetails : winrt::Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails
    {
        SearchQueryLinguisticDetails(std::nullptr_t) noexcept {}
        SearchQueryLinguisticDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails(ptr, take_ownership_from_abi) {}
        SearchQueryLinguisticDetails(param::iterable<hstring> const& queryTextAlternatives, uint32_t queryTextCompositionStart, uint32_t queryTextCompositionLength);
        SearchQueryLinguisticDetails(SearchQueryLinguisticDetails const&) noexcept = default;
        SearchQueryLinguisticDetails(SearchQueryLinguisticDetails&&) noexcept = default;
        SearchQueryLinguisticDetails& operator=(SearchQueryLinguisticDetails const&) & noexcept = default;
        SearchQueryLinguisticDetails& operator=(SearchQueryLinguisticDetails&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SearchSuggestionCollection : winrt::Windows::ApplicationModel::Search::ISearchSuggestionCollection
    {
        SearchSuggestionCollection(std::nullptr_t) noexcept {}
        SearchSuggestionCollection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Search::ISearchSuggestionCollection(ptr, take_ownership_from_abi) {}
        SearchSuggestionCollection(SearchSuggestionCollection const&) noexcept = default;
        SearchSuggestionCollection(SearchSuggestionCollection&&) noexcept = default;
        SearchSuggestionCollection& operator=(SearchSuggestionCollection const&) & noexcept = default;
        SearchSuggestionCollection& operator=(SearchSuggestionCollection&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SearchSuggestionsRequest : winrt::Windows::ApplicationModel::Search::ISearchSuggestionsRequest
    {
        SearchSuggestionsRequest(std::nullptr_t) noexcept {}
        SearchSuggestionsRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Search::ISearchSuggestionsRequest(ptr, take_ownership_from_abi) {}
        SearchSuggestionsRequest(SearchSuggestionsRequest const&) noexcept = default;
        SearchSuggestionsRequest(SearchSuggestionsRequest&&) noexcept = default;
        SearchSuggestionsRequest& operator=(SearchSuggestionsRequest const&) & noexcept = default;
        SearchSuggestionsRequest& operator=(SearchSuggestionsRequest&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SearchSuggestionsRequestDeferral : winrt::Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral
    {
        SearchSuggestionsRequestDeferral(std::nullptr_t) noexcept {}
        SearchSuggestionsRequestDeferral(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral(ptr, take_ownership_from_abi) {}
        SearchSuggestionsRequestDeferral(SearchSuggestionsRequestDeferral const&) noexcept = default;
        SearchSuggestionsRequestDeferral(SearchSuggestionsRequestDeferral&&) noexcept = default;
        SearchSuggestionsRequestDeferral& operator=(SearchSuggestionsRequestDeferral const&) & noexcept = default;
        SearchSuggestionsRequestDeferral& operator=(SearchSuggestionsRequestDeferral&&) & noexcept = default;
    };
}
#endif
