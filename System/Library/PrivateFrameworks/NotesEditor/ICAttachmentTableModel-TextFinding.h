//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesShared/ICAttachmentTableModel.h>

@interface ICAttachmentTableModel (TextFinding)
- (void)replaceTextFindingResult:(id)arg1 withReplacementString:(id)arg2 tableViewController:(id)arg3;	// IMP=0x007000000000328a
- (void)undoablyReplaceTextFindingResult:(id)arg1 withReplacementString:(id)arg2 tableViewController:(id)arg3;	// IMP=0x0070000000003165
- (void)undoablyReplaceAllOccurrencesOfQueryString:(id)arg1 ignoreCase:(_Bool)arg2 wholeWords:(_Bool)arg3 withText:(id)arg4 tableViewController:(id)arg5;	// IMP=0x0070000000002e06
- (void)textFindingResultsMatchingString:(id)arg1 ignoreCase:(_Bool)arg2 wholeWords:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0070000000002990
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0070000000012821
- (id)writableTypeIdentifiersForItemProvider;	// IMP=0x007000000001277e
@end
