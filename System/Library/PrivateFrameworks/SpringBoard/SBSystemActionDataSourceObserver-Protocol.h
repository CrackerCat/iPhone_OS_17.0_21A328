//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBSystemAction;
@protocol SBSystemActionDataSource;

@protocol SBSystemActionDataSourceObserver <NSObject>
- (void)systemActionDataSource:(id <SBSystemActionDataSource>)arg1 didUpdateSelectedAction:(SBSystemAction *)arg2;
@end
