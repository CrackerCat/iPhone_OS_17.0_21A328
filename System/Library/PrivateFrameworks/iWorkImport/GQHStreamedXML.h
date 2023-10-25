//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GQHStreamedXML : NSObject
{
    struct _xmlOutputBuffer {
        void *_field1;
        CDUnknownFunctionPointerType _field2;
        CDUnknownFunctionPointerType _field3;
        struct _xmlCharEncodingHandler *_field4;
        struct _xmlBuf *_field5;
        struct _xmlBuf *_field6;
        int _field7;
        int _field8;
    } *mOutputBuffer;	// 8 = 0x8
    struct __CFData *mData;	// 16 = 0x10
    struct __CFArray *mElementNameStack;	// 24 = 0x18
    int mLastOp;	// 32 = 0x20
    _Bool mNeedNewlineBeforeNextElement;	// 36 = 0x24
    struct _xmlDoc *mXMLDoc;	// 40 = 0x28
}

- (struct __CFData *)createProgressiveHtml;	// IMP=0x000000000005072a
- (struct __CFData *)createHtml;	// IMP=0x00000000000506a6
- (struct __CFData *)createHtmlWithCss:(struct __CFString *)arg1;	// IMP=0x000000000005069e
- (void)addCharRef:(const char *)arg1;	// IMP=0x0000000000050617
- (void)addXmlCharContent:(const char *)arg1;	// IMP=0x000000000005054b
- (void)setAttribute:(const char *)arg1 value:(const char *)arg2;	// IMP=0x0000000000050438
- (void)endElementWithExpectedName:(const char *)arg1;	// IMP=0x0000000000050426
- (void)endElement;	// IMP=0x0000000000050319
- (void)startElement:(const char *)arg1;	// IMP=0x000000000005029f
- (void)dealloc;	// IMP=0x00000000000501cd
- (id)initWithHead;	// IMP=0x0000000000050115
- (id)initEmpty;	// IMP=0x0000000000050028
- (const char *)peekElementName;	// IMP=0x00000000000507fb
- (char *)popElementName;	// IMP=0x00000000000507ad
- (void)pushElementName:(const char *)arg1;	// IMP=0x000000000005078a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
