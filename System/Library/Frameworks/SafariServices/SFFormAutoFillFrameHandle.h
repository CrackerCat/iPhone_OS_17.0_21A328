//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSNumber, NSString, NSURL, WBSGlobalFrameIdentifier, _WKFrameHandle;

__attribute__((visibility("hidden")))
@interface SFFormAutoFillFrameHandle : NSObject
{
    NSURL *_URL;	// 8 = 0x8
    struct __SecTrust *_serverTrust;	// 16 = 0x10
    _WKFrameHandle *_frameHandle;	// 24 = 0x18
    NSNumber *_pageID;	// 32 = 0x20
}

+ (id)frameHandleFromSerializedData:(id)arg1;	// IMP=0x001000000006ec86
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000006e946
- (void).cxx_destruct;	// IMP=0x000000000006ee97
@property(readonly, nonatomic) NSNumber *pageID; // @synthesize pageID=_pageID;
@property(readonly, nonatomic) _WKFrameHandle *frameHandle; // @synthesize frameHandle=_frameHandle;
@property(readonly, nonatomic) struct __SecTrust *webui_serverTrust;
@property(readonly, nonatomic) NSURL *webui_URL;
@property(readonly, copy, nonatomic) NSData *serializedData;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006eb1b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006e94e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006e93b
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006e723
- (void)dealloc;	// IMP=0x000000000006e6e4
@property(readonly, nonatomic) WBSGlobalFrameIdentifier *webFrameIdentifier;
- (id)initWithFrameHandle:(id)arg1 URL:(id)arg2 serverTrust:(struct __SecTrust *)arg3 pageID:(id)arg4;	// IMP=0x000000000006e55d
- (id)initWithWebProcessPlugInFrame:(id)arg1;	// IMP=0x000000000009254c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
