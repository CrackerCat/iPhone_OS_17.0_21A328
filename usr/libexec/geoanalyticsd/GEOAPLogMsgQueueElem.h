//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDate;

@interface GEOAPLogMsgQueueElem
{
    unsigned long long _uploadBatchId;	// 16 = 0x10
    NSData *_logMsg;	// 24 = 0x18
    NSDate *_expireTime;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000001463b
@property(readonly, nonatomic) NSDate *expireTime; // @synthesize expireTime=_expireTime;
@property(readonly, nonatomic) unsigned long long uploadBatchId; // @synthesize uploadBatchId=_uploadBatchId;
@property(readonly, nonatomic) NSData *logMsg; // @synthesize logMsg=_logMsg;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000144df
- (unsigned long long)hash;	// IMP=0x001000000001447b
- (id)copy;	// IMP=0x001000000001442b
- (id)initWithLogMsg:(id)arg1 uploadBatchId:(unsigned long long)arg2 expireTime:(id)arg3 createTime:(id)arg4;	// IMP=0x0010000000014353

@end
