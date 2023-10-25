//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIWindow, VKMapView;

@interface MapsRPTParameters : NSObject
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    NSString *_testName;	// 16 = 0x10
    UIWindow *_window;	// 24 = 0x18
    double _dragDist;	// 32 = 0x20
    double _duration;	// 40 = 0x28
    VKMapView *_view;	// 48 = 0x30
    NSArray *_testActions;	// 56 = 0x38
    double _actionDuration;	// 64 = 0x40
    struct CGPoint _center;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000521705
@property(nonatomic) double actionDuration; // @synthesize actionDuration=_actionDuration;
@property(readonly, nonatomic) NSArray *testActions; // @synthesize testActions=_testActions;
@property(readonly, nonatomic) VKMapView *view; // @synthesize view=_view;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(nonatomic) double dragDist; // @synthesize dragDist=_dragDist;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(copy, nonatomic) NSString *testName; // @synthesize testName=_testName;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)prepareWithComposer:(id)arg1;	// IMP=0x00100000005214b7
- (CDUnknownBlockType)composerBlock;	// IMP=0x00100000005207d7
- (id)initWithTestName:(id)arg1 view:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 testActions:(id)arg4 actionDuration:(double)arg5;	// IMP=0x001000000052065a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool managesTestStartAndEnd;
@property(readonly) Class superclass;

@end
