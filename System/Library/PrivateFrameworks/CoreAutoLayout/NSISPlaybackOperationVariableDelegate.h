//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSISVariable, NSString;

__attribute__((visibility("hidden")))
@interface NSISPlaybackOperationVariableDelegate : NSObject
{
    NSISVariable *_variable;	// 8 = 0x8
    NSString *_variableDescription;	// 16 = 0x10
    NSString *_markedConstraintDescription;	// 24 = 0x18
    _Bool _variableIsUserObservable;	// 32 = 0x20
    int _orientationHint;	// 36 = 0x24
}

@property int orientationHint; // @synthesize orientationHint=_orientationHint;
@property _Bool variableIsUserObservable; // @synthesize variableIsUserObservable=_variableIsUserObservable;
@property(copy) NSString *markedConstraintDescription; // @synthesize markedConstraintDescription=_markedConstraintDescription;
@property(copy) NSString *variableDescription; // @synthesize variableDescription=_variableDescription;
@property(retain) NSISVariable *variable; // @synthesize variable=_variable;
- (void)_addToEngine:(id)arg1;	// IMP=0x000000000001a2fb
- (id)secondItem;	// IMP=0x000000000001a2f3
- (id)firstItem;	// IMP=0x000000000001a2eb
- (id)description;	// IMP=0x000000000001a286
- (int)nsis_orientationHintForVariable:(id)arg1;	// IMP=0x000000000001a274
- (_Bool)nsis_valueOfVariableIsUserObservable:(id)arg1;	// IMP=0x000000000001a262
- (id)nsis_descriptionOfVariable:(id)arg1;	// IMP=0x000000000001a250
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;	// IMP=0x000000000001a24a
- (void)dealloc;	// IMP=0x000000000001a1f9

@end
