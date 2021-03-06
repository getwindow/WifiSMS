/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@class NSMutableArray, <VSRecognitionResultHandlingThreadDelegate>, NSConditionLock;



@interface VSRecognitionResultHandlingThread : NSObject 
{
    <VSRecognitionResultHandlingThreadDelegate> *_delegate;
    NSMutableArray *_requests;
    NSConditionLock *_lock;
    struct { 
        unsigned int running : 1; 
        unsigned int delegateDidHandleResults : 1; 
        unsigned int valid : 1; 
    } _resultHandlingFlags;
}


- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)handleResults:(id)arg1 withHandler:(id)arg2;
- (void)invalidate;
- (void)_notifyRequestHandled:(id)arg1;
- (void)_handleRequests;

@end
