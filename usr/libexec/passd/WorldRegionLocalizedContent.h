//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface WorldRegionLocalizedContent
{
}

+ (id)_predicateForLocaleIdentifier:(id)arg1;	// IMP=0x004000000035cc80
+ (id)_predicateForWorldRegionPID:(long long)arg1;	// IMP=0x001000000035cc0f
+ (void)deleteLocalizedContentForPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000035cb76
+ (id)localizedNameForWorldRegionPID:(long long)arg1 localeIdentifier:(id)arg2 inDatabase:(id)arg3;	// IMP=0x001000000035c9ef
+ (void)insertName:(id)arg1 localeIdentifier:(id)arg2 forWorldRegionPID:(long long)arg3 inDatabase:(id)arg4;	// IMP=0x001000000035c6c4
+ (id)databaseTable;	// IMP=0x001000000035c6b7

@end
