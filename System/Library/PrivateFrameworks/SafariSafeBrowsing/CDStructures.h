//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct ByteProvider;

struct FetchThreatListUpdatesResponseParser;

struct shared_ptr<ByteProvider> {
    struct ByteProvider *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct unique_ptr<Backend::Google::FetchThreatListUpdatesResponseParser, std::default_delete<Backend::Google::FetchThreatListUpdatesResponseParser>> {
    struct __compressed_pair<Backend::Google::FetchThreatListUpdatesResponseParser *, std::default_delete<Backend::Google::FetchThreatListUpdatesResponseParser>> {
        struct FetchThreatListUpdatesResponseParser *__value_;
    } __ptr_;
};
