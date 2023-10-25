//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface ADBaseService
{
    NSDictionary *_commandRegistry;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000024c6e4
- (void)_registerCommandHandlersWithRegistry:(id)arg1;	// IMP=0x001000000024c6de
- (void)_unhandledCommand:(id)arg1 forDomain:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000024c66d
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000024c590
- (id)commandsForDomain:(id)arg1;	// IMP=0x001000000024c535
- (id)domains;	// IMP=0x001000000024c518
- (id)handle;	// IMP=0x001000000024c50f
- (SEL)_selectorForCommandClass:(id)arg1 andDomain:(id)arg2;	// IMP=0x001000000024c460
- (void)_registerCommandClass:(id)arg1 forDomain:(id)arg2 withSelector:(SEL)arg3 forRegistry:(id)arg4;	// IMP=0x001000000024c331
- (id)init;	// IMP=0x001000000024c262

@end
