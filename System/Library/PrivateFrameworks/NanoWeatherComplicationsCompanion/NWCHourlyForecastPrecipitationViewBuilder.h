//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLKDevice, NSString;

__attribute__((visibility("hidden")))
@interface NWCHourlyForecastPrecipitationViewBuilder : NSObject
{
    CLKDevice *_device;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000b208
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
- (id)createHourlyForecastView;	// IMP=0x000000000000b195
- (id)initWithDevice:(id)arg1;	// IMP=0x000000000000b12a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
