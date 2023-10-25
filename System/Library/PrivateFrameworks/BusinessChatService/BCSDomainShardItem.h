//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface BCSDomainShardItem
{
    NSURL *_fileURL;	// 8 = 0x8
}

+ (id)shardItemWithFileURL:(id)arg1;	// IMP=0x0010000000053cdf
- (void).cxx_destruct;	// IMP=0x0000000000054242
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000054182
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000054105
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000054098
@property(readonly, copy) NSString *description;
- (id)initWithFileURL:(id)arg1 startIndex:(long long)arg2 shardCount:(long long)arg3 type:(long long)arg4 expirationDate:(id)arg5;	// IMP=0x0000000000053f50
- (id)initWithURL:(id)arg1;	// IMP=0x000000000004a0ce
- (id)initWithRecord:(id)arg1 type:(long long)arg2;	// IMP=0x0000000000049da5
- (id)initWithJSONObj:(id)arg1 type:(long long)arg2;	// IMP=0x00000000000496b6

// Remaining properties
@property(readonly, nonatomic) NSString *base64EncodedString;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy, nonatomic) NSDate *expirationDate;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long shardCount;
@property(readonly, nonatomic) long long startIndex;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long type;

@end
