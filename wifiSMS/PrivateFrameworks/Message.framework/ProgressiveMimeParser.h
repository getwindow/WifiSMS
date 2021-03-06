/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableData, NSArray, NSData, MimePart;



@interface ProgressiveMimeParser : NSObject 
{
    NSMutableData *_data;
    NSArray *_preserveHeaders;
    id _delegate;
    id _context;
    NSUInteger _cursor;
    NSUInteger _lastLength;
    MimePart *_topLevelPart;
    MimePart *_currentPart;
    NSData *_currentBoundary;
    struct { 
        unsigned int delegateBeganMimePart : 1; 
        unsigned int delegateFinishedMimePart : 1; 
        unsigned int delegateBeganData : 1; 
        unsigned int delegateFailed : 1; 
        unsigned int state : 3; 
    } _parserFlags;
}


- (id)initWithBodyData:(id)arg1 topLevelHeaders:(id)arg2 headersToPreserve:(id)arg3;
- (void)dealloc;
- (void)start;
- (void)setDelegate:(id)arg1;
- (void)setContext:(id)arg1;
- (id)context;
- (void)noteDataLengthChanged:(NSUInteger)arg1;
- (id)topLevelPart;
- (id)currentPart;
- (id)data;
- (void)_initializeTopLevelPartWithHeaders:(id)arg1;
- (void)_continueParsingStartOfPart;
- (void)_continueParsingHeaders;
- (id)_currentBoundary;
- (void)_continueParsingBody;
- (void)_continueParsing;
- (void)_reportError:(id)arg1;

@end
