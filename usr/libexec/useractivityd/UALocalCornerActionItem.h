//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserActivity/UAUserActivityInfo.h>

@class UAUserActivityClientProcess;

@interface UALocalCornerActionItem : UAUserActivityInfo
{
    UAUserActivityClientProcess *_originatingClient;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000013f55
- (void);	// IMP=0x0010000000013f41
@property __weak UAUserActivityClientProcess *originatingClient; // @synthesize originatingClient=_originatingClient;
- (id)initWithUUID:(id)arg1 type:(unsigned long long)arg2 options:(id)arg3 originatingClient:(id)arg4;	// IMP=0x0010000000013ea3

@end
