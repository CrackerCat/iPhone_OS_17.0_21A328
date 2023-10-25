//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Function Pointers

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AlternativeTextUIController;

struct ArchiveResource;

struct Atomic<unsigned char> {
    struct atomic<unsigned char> value;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CompletionHandler<void (WebCore::NotificationPermission)> {
    struct Function<void (WebCore::NotificationPermission)> m_function;
};

struct DOMWrapperWorld;

struct DeviceOrientationClientMock;

struct DeviceOrientationData;

struct Element;

struct FileChooser;

struct Function<void (WebCore::NotificationPermission)> {
    struct unique_ptr<WTF::Detail::CallableWrapperBase<void, WebCore::NotificationPermission>, std::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::NotificationPermission>>> m_callableWrapper;
};

struct Function<void (WebCore::PolicyAction, WebCore::ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::PolicyCheckIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>>)> {
    struct unique_ptr<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::PolicyCheckIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>>>, std::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::PolicyCheckIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>>>>> m_callableWrapper;
};

struct Geolocation;

struct GeolocationPositionData {
    double timestamp;
    double latitude;
    double longitude;
    double accuracy;
    struct optional<double> altitude;
    struct optional<double> altitudeAccuracy;
    struct optional<double> heading;
    struct optional<double> speed;
    struct optional<double> floorLevel;
};

struct HashMap<unsigned long, WTF::RetainPtr<id>, WTF::DefaultHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RetainPtr<id>>, WTF::HashTableTraits> {
    struct HashTable<unsigned long, WTF::KeyValuePair<unsigned long, WTF::RetainPtr<id>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long, WTF::RetainPtr<id>>>, WTF::DefaultHash<unsigned long>, WTF::HashMap<unsigned long, WTF::RetainPtr<id>>::KeyValuePairTraits, WTF::HashTraits<unsigned long>> m_impl;
};

struct HashTable<unsigned long, WTF::KeyValuePair<unsigned long, WTF::RetainPtr<id>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long, WTF::RetainPtr<id>>>, WTF::DefaultHash<unsigned long>, WTF::HashMap<unsigned long, WTF::RetainPtr<id>>::KeyValuePairTraits, WTF::HashTraits<unsigned long>> {
    union {
        void *m_table;
        unsigned int *m_tableForLLDB;
    } ;
};

struct HistoryItem;

struct InspectorController;

struct JSCell;

struct JSValue {
    union EncodedValueDescriptor u;
};

struct KeyboardEvent;

struct LegacyWebArchive;

struct LocalFrame;

struct Lock {
    struct Atomic<unsigned char> m_byte;
};

struct MimeClassInfo;

struct NakedPtr<WebCore::Geolocation> {
    struct Geolocation *_field1;
};

struct NakedPtr<WebCore::InspectorController> {
    struct InspectorController *m_ptr;
};

struct NakedPtr<WebCore::LocalFrame> {
    struct LocalFrame *m_ptr;
};

struct NakedPtr<WebInspectorFrontendClient> {
    struct WebInspectorFrontendClient *m_ptr;
};

struct NakedRef<WebCore::Geolocation> {
    struct Geolocation *_field1;
};

struct ObjectIdentifierGeneric<WebCore::PolicyCheckIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> {
    unsigned long long m_identifier;
};

struct ObjectIdentifierGeneric<WebCore::ProcessIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> {
    unsigned long long m_identifier;
};

struct PluginInfo {
    struct String name;
    struct String file;
    struct String desc;
    struct Vector<WebCore::MimeClassInfo, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> mimes;
    _Bool isApplicationPlugin;
    unsigned char clientLoadPolicy;
    struct String bundleIdentifier;
};

struct ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::PolicyCheckIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>> {
    struct ObjectIdentifierGeneric<WebCore::PolicyCheckIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> m_object;
    struct ObjectIdentifierGeneric<WebCore::ProcessIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> m_processIdentifier;
};

struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> {
    struct StringImpl *m_ptr;
};

struct RefPtr<WebCore::ArchiveResource, WTF::RawPtrTraits<WebCore::ArchiveResource>, WTF::DefaultRefDerefTraits<WebCore::ArchiveResource>> {
    struct ArchiveResource *m_ptr;
};

struct RefPtr<WebCore::DOMWrapperWorld, WTF::RawPtrTraits<WebCore::DOMWrapperWorld>, WTF::DefaultRefDerefTraits<WebCore::DOMWrapperWorld>> {
    struct DOMWrapperWorld *m_ptr;
};

struct RefPtr<WebCore::DeviceOrientationData, WTF::RawPtrTraits<WebCore::DeviceOrientationData>, WTF::DefaultRefDerefTraits<WebCore::DeviceOrientationData>> {
    struct DeviceOrientationData *m_ptr;
};

struct RefPtr<WebCore::Element, WTF::RawPtrTraits<WebCore::Element>, WTF::DefaultRefDerefTraits<WebCore::Element>> {
    struct Element *m_ptr;
};

struct RefPtr<WebCore::FileChooser, WTF::RawPtrTraits<WebCore::FileChooser>, WTF::DefaultRefDerefTraits<WebCore::FileChooser>> {
    struct FileChooser *m_ptr;
};

struct RefPtr<WebCore::Geolocation, WTF::RawPtrTraits<WebCore::Geolocation>, WTF::DefaultRefDerefTraits<WebCore::Geolocation>> {
    struct Geolocation *m_ptr;
};

struct RefPtr<WebCore::HistoryItem, WTF::RawPtrTraits<WebCore::HistoryItem>, WTF::DefaultRefDerefTraits<WebCore::HistoryItem>> {
    struct HistoryItem *m_ptr;
};

struct RefPtr<WebCore::LegacyWebArchive, WTF::RawPtrTraits<WebCore::LegacyWebArchive>, WTF::DefaultRefDerefTraits<WebCore::LegacyWebArchive>> {
    struct LegacyWebArchive *m_ptr;
};

struct RefPtr<WebCore::LocalFrame, WTF::RawPtrTraits<WebCore::LocalFrame>, WTF::DefaultRefDerefTraits<WebCore::LocalFrame>> {
    struct LocalFrame *m_ptr;
};

struct RefPtr<WebCore::UndoStep, WTF::RawPtrTraits<WebCore::UndoStep>, WTF::DefaultRefDerefTraits<WebCore::UndoStep>> {
    struct UndoStep *m_ptr;
};

struct RefPtr<WebCore::ValidationBubble, WTF::RawPtrTraits<WebCore::ValidationBubble>, WTF::DefaultRefDerefTraits<WebCore::ValidationBubble>> {
    struct ValidationBubble *m_ptr;
};

struct RefPtr<WebViewGroup, WTF::RawPtrTraits<WebViewGroup>, WTF::DefaultRefDerefTraits<WebViewGroup>> {
    struct WebViewGroup *m_ptr;
};

struct RetainPtr<CGColor *> {
    void *m_ptr;
};

struct RetainPtr<NSArray> {
    void *m_ptr;
};

struct RetainPtr<NSData> {
    void *m_ptr;
};

struct RetainPtr<NSMutableArray> {
    void *m_ptr;
};

struct RetainPtr<NSMutableDictionary> {
    void *m_ptr;
};

struct RetainPtr<NSMutableSet> {
    void *m_ptr;
};

struct RetainPtr<NSString> {
    void *m_ptr;
};

struct RetainPtr<NSURL> {
    void *m_ptr;
};

struct RetainPtr<NSURLRequest> {
    void *m_ptr;
};

struct RetainPtr<NSURLResponse> {
    void *m_ptr;
};

struct RetainPtr<WAKScrollView> {
    void *m_ptr;
};

struct RetainPtr<WAKWindow> {
    void *m_ptr;
};

struct RetainPtr<WebDataSource> {
    void *m_ptr;
};

struct RetainPtr<WebEvent> {
    void *m_ptr;
};

struct RetainPtr<WebFixedPositionContent> {
    void *m_ptr;
};

struct RetainPtr<WebFrameView> {
    void *m_ptr;
};

struct RetainPtr<WebFullScreenController> {
    void *m_ptr;
};

struct RetainPtr<WebIndicateLayer> {
    void *m_ptr;
};

struct RetainPtr<WebInspector> {
    void *m_ptr;
};

struct RetainPtr<WebNodeHighlight> {
    void *m_ptr;
};

struct RetainPtr<WebPluginController> {
    void *m_ptr;
};

struct RetainPtr<WebPreferences> {
    void *m_ptr;
};

struct RetainPtr<WebResource> {
    void *m_ptr;
};

struct RetainPtr<WebUITextIndicatorData> {
    void *m_ptr;
};

struct RetainPtr<WebVideoFullscreenController> {
    void *m_ptr;
};

struct RetainPtr<WebView> {
    void *m_ptr;
};

struct RetainPtr<__CFBundle *> {
    void *m_ptr;
};

struct RetainPtr<id> {
    void *m_ptr;
};

struct String {
    struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> m_impl;
};

struct StringImpl;

struct TextIterator;

struct UndoStep;

struct UserContentURLPattern {
    struct String m_scheme;
    struct String m_host;
    struct String m_path;
    unsigned char m_error;
    _Bool m_matchSubdomains;
};

struct ValidationBubble;

struct Vector<WTF::RetainPtr<WebVideoFullscreenController>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> {
    void *m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
};

struct Vector<WebCore::MimeClassInfo, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> {
    struct MimeClassInfo *m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
};

struct Vector<unsigned short, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> {
    unsigned short *m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
};

struct WebFrameLoadDelegateImplementationCache {
    CDUnknownFunctionPointerType didCreateJavaScriptContextForFrameFunc;
    CDUnknownFunctionPointerType didClearWindowObjectForFrameFunc;
    CDUnknownFunctionPointerType didClearWindowObjectForFrameInScriptWorldFunc;
    CDUnknownFunctionPointerType didClearInspectorWindowObjectForFrameFunc;
    CDUnknownFunctionPointerType windowScriptObjectAvailableFunc;
    CDUnknownFunctionPointerType didHandleOnloadEventsForFrameFunc;
    CDUnknownFunctionPointerType didReceiveServerRedirectForProvisionalLoadForFrameFunc;
    CDUnknownFunctionPointerType didCancelClientRedirectForFrameFunc;
    CDUnknownFunctionPointerType willPerformClientRedirectToURLDelayFireDateForFrameFunc;
    CDUnknownFunctionPointerType didChangeLocationWithinPageForFrameFunc;
    CDUnknownFunctionPointerType didPushStateWithinPageForFrameFunc;
    CDUnknownFunctionPointerType didReplaceStateWithinPageForFrameFunc;
    CDUnknownFunctionPointerType didPopStateWithinPageForFrameFunc;
    CDUnknownFunctionPointerType willCloseFrameFunc;
    CDUnknownFunctionPointerType didStartProvisionalLoadForFrameFunc;
    CDUnknownFunctionPointerType didReceiveTitleForFrameFunc;
    CDUnknownFunctionPointerType didCommitLoadForFrameFunc;
    CDUnknownFunctionPointerType didFailProvisionalLoadWithErrorForFrameFunc;
    CDUnknownFunctionPointerType didFailLoadWithErrorForFrameFunc;
    CDUnknownFunctionPointerType didFinishLoadForFrameFunc;
    CDUnknownFunctionPointerType didFirstLayoutInFrameFunc;
    CDUnknownFunctionPointerType didFirstVisuallyNonEmptyLayoutInFrameFunc;
    CDUnknownFunctionPointerType didLayoutFunc;
    CDUnknownFunctionPointerType didReceiveIconForFrameFunc;
    CDUnknownFunctionPointerType didFinishDocumentLoadForFrameFunc;
    CDUnknownFunctionPointerType didDisplayInsecureContentFunc;
    CDUnknownFunctionPointerType didRunInsecureContentFunc;
    CDUnknownFunctionPointerType didDetectXSSFunc;
    CDUnknownFunctionPointerType didRemoveFrameFromHierarchyFunc;
    CDUnknownFunctionPointerType webThreadDidLayoutFunc;
};

struct WebHTMLViewInterpretKeyEventsParameters {
    struct KeyboardEvent *_field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
    _Bool _field5;
};

struct WebHistoryDelegateImplementationCache {
    CDUnknownFunctionPointerType navigatedFunc;
    CDUnknownFunctionPointerType clientRedirectFunc;
    CDUnknownFunctionPointerType serverRedirectFunc;
    CDUnknownFunctionPointerType deprecatedSetTitleFunc;
    CDUnknownFunctionPointerType setTitleFunc;
    CDUnknownFunctionPointerType populateVisitedLinksFunc;
};

struct WebInspectorFrontendClient;

struct WebResourceDelegateImplementationCache {
    CDUnknownFunctionPointerType didReceiveAuthenticationChallengeFunc;
    CDUnknownFunctionPointerType canAuthenticateAgainstProtectionSpaceFunc;
    CDUnknownFunctionPointerType connectionPropertiesFunc;
    CDUnknownFunctionPointerType webThreadDidFinishLoadingFromDataSourceFunc;
    CDUnknownFunctionPointerType webThreadDidFailLoadingWithErrorFromDataSourceFunc;
    CDUnknownFunctionPointerType webThreadIdentifierForRequestFunc;
    CDUnknownFunctionPointerType webThreadDidLoadResourceFromMemoryCacheFunc;
    CDUnknownFunctionPointerType webThreadWillSendRequestFunc;
    CDUnknownFunctionPointerType webThreadDidReceiveResponseFunc;
    CDUnknownFunctionPointerType webThreadDidReceiveContentLengthFunc;
    CDUnknownFunctionPointerType webThreadWillCacheResponseFunc;
    CDUnknownFunctionPointerType identifierForRequestFunc;
    CDUnknownFunctionPointerType willSendRequestFunc;
    CDUnknownFunctionPointerType didReceiveResponseFunc;
    CDUnknownFunctionPointerType didReceiveContentLengthFunc;
    CDUnknownFunctionPointerType didFinishLoadingFromDataSourceFunc;
    CDUnknownFunctionPointerType didFailLoadingWithErrorFromDataSourceFunc;
    CDUnknownFunctionPointerType didLoadResourceFromMemoryCacheFunc;
    CDUnknownFunctionPointerType willCacheResponseFunc;
    CDUnknownFunctionPointerType plugInFailedWithErrorFunc;
    CDUnknownFunctionPointerType shouldUseCredentialStorageFunc;
    CDUnknownFunctionPointerType shouldPaintBrokenImageForURLFunc;
};

struct WebScriptDebugDelegateImplementationCache {
    _Bool didParseSourceExpectsBaseLineNumber;
    _Bool exceptionWasRaisedExpectsHasHandlerFlag;
    CDUnknownFunctionPointerType didParseSourceFunc;
    CDUnknownFunctionPointerType failedToParseSourceFunc;
    CDUnknownFunctionPointerType exceptionWasRaisedFunc;
};

struct WebScriptDebugger;

struct WebViewGroup;

struct WebViewRenderingUpdateScheduler;

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct atomic<unsigned char> {
    struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> {
        _Atomic unsigned char __a_value;
    } __a_;
};

struct optional<double> {
    union {
        char __null_state_;
        double __val_;
    } ;
    _Bool __engaged_;
};

struct unique_ptr<WTF::Detail::CallableWrapperBase<void, WebCore::NotificationPermission>, std::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::NotificationPermission>>> {
    struct __compressed_pair<WTF::Detail::CallableWrapperBase<void, WebCore::NotificationPermission>*, std::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::NotificationPermission>>> {
        void *__value_;
    } __ptr_;
};

struct unique_ptr<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::PolicyCheckIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>>>, std::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::PolicyCheckIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>>>>> {
    struct __compressed_pair<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::PolicyCheckIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>>>*, std::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::PolicyCheckIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>>>>> {
        void *__value_;
    } __ptr_;
};

struct unique_ptr<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>>, std::default_delete<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>>>> {
    struct __compressed_pair<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>>*, std::default_delete<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>>>> {
        void *__value_;
    } __ptr_;
};

struct unique_ptr<WTF::Vector<WTF::String>, std::default_delete<WTF::Vector<WTF::String>>> {
    struct __compressed_pair<WTF::Vector<WTF::String>*, std::default_delete<WTF::Vector<WTF::String>>> {
        void *__value_;
    } __ptr_;
};

struct unique_ptr<WebCore::AlternativeTextUIController, std::default_delete<WebCore::AlternativeTextUIController>> {
    struct __compressed_pair<WebCore::AlternativeTextUIController *, std::default_delete<WebCore::AlternativeTextUIController>> {
        struct AlternativeTextUIController *__value_;
    } __ptr_;
};

struct unique_ptr<WebCore::DeviceOrientationClientMock, std::default_delete<WebCore::DeviceOrientationClientMock>> {
    struct __compressed_pair<WebCore::DeviceOrientationClientMock *, std::default_delete<WebCore::DeviceOrientationClientMock>> {
        struct DeviceOrientationClientMock *__value_;
    } __ptr_;
};

struct unique_ptr<WebCore::TextIterator, std::default_delete<WebCore::TextIterator>> {
    struct __compressed_pair<WebCore::TextIterator *, std::default_delete<WebCore::TextIterator>> {
        struct TextIterator *__value_;
    } __ptr_;
};

struct unique_ptr<WebScriptDebugger, std::default_delete<WebScriptDebugger>> {
    struct __compressed_pair<WebScriptDebugger *, std::default_delete<WebScriptDebugger>> {
        struct WebScriptDebugger *__value_;
    } __ptr_;
};

struct unique_ptr<WebViewRenderingUpdateScheduler, std::default_delete<WebViewRenderingUpdateScheduler>> {
    struct __compressed_pair<WebViewRenderingUpdateScheduler *, std::default_delete<WebViewRenderingUpdateScheduler>> {
        struct WebViewRenderingUpdateScheduler *__value_;
    } __ptr_;
};

#pragma mark Typedef'd Structures

// Template types
typedef struct NakedPtr<WebCore::Geolocation> {
    struct Geolocation *_field1;
} NakedPtr_331571b6;

typedef struct NakedPtr<WebCore::InspectorController> {
    struct InspectorController *m_ptr;
} NakedPtr_5b249b89;

typedef struct NakedPtr<WebCore::LocalFrame> {
    struct LocalFrame *m_ptr;
} NakedPtr_9be60511;

typedef struct NakedPtr<WebInspectorFrontendClient> {
    struct WebInspectorFrontendClient *m_ptr;
} NakedPtr_fc424271;

typedef struct NakedRef<WebCore::Geolocation> {
    struct Geolocation *_field1;
} NakedRef_f8c98cc9;

typedef struct ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::PolicyCheckIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>> {
    struct ObjectIdentifierGeneric<WebCore::PolicyCheckIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> m_object;
    struct ObjectIdentifierGeneric<WebCore::ProcessIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> m_processIdentifier;
} ProcessQualified_bb72c1c6;

#pragma mark Named Unions

union EncodedValueDescriptor {
    long long asInt64;
    struct JSCell *ptr;
    struct {
        int payload;
        int tag;
    } asBits;
};
