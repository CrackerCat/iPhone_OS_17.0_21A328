//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface RidesharingPartitionedAppSuggestions : NSObject
{
    NSArray *_installedSuggestions;	// 8 = 0x8
    NSArray *_notInstalledSuggestions;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000045e57b
@property(readonly, copy, nonatomic) NSArray *notInstalledSuggestions; // @synthesize notInstalledSuggestions=_notInstalledSuggestions;
@property(readonly, copy, nonatomic) NSArray *installedSuggestions; // @synthesize installedSuggestions=_installedSuggestions;
- (id)initWithInstalledSuggestions:(id)arg1 notInstalledSuggestions:(id)arg2;	// IMP=0x001000000045e4ae

@end
