//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface VUIAlertAction : NSObject
{
    _Bool _enabled;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    UIImage *_titleImage;	// 24 = 0x18
    long long _style;	// 32 = 0x20
    NSDictionary *_metrics;	// 40 = 0x28
    CDUnknownBlockType _handler;	// 48 = 0x30
}

+ (id)vui_actionWithTitle:(id)arg1 titleImage:(id)arg2 style:(long long)arg3 metrics:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00600000001301d1
+ (id)vui_actionWithTitle:(id)arg1 titleImage:(id)arg2 style:(long long)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00600000001301a8
+ (id)vui_actionWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0060000000130177
- (void).cxx_destruct;	// IMP=0x0000000000130355
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) NSDictionary *metrics; // @synthesize metrics=_metrics;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) UIImage *titleImage; // @synthesize titleImage=_titleImage;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end
