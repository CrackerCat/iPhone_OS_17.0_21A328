//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsUI/NSObject-Protocol.h>

@class NSString, UIMenu;
@protocol MUDynamicButtonCellModelChangeDelegate;

@protocol MUDynamicButtonCellModel <NSObject>
@property(readonly, nonatomic) long long actionStyle;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
@property(copy, nonatomic) CDUnknownBlockType actionBlock;
@property(readonly, nonatomic) NSString *symbolName;
@property(readonly, nonatomic) NSString *titleString;

@optional
@property(copy, nonatomic) UIMenu *menu;
@property(nonatomic) __weak id <MUDynamicButtonCellModelChangeDelegate> changeDelegate;
- (NSString *)accessibilityIdentifierForAction;
@end
