/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

@interface ASTConnectionManager : NSObject <ASTConnectionStatusDelegate> {
    <ASTConnectionManagerDelegate> * _delegate;
    ASTNetworking * _networking;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ASTConnectionManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) ASTNetworking *networking;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancelAllTestResults;
- (void)connection:(id)arg1 connectionStateChanged:(int)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpected:(long long)arg4;
- (void)dealloc;
- (id)delegate;
- (void)downloadAsset:(id)arg1 destinationFileHandle:(id)arg2 sessionId:(id)arg3 completion:(id /* block */)arg4;
- (id)init;
- (id)networking;
- (id)postEnrollWithSerialNumber:(id)arg1;
- (void)postFileURL:(id)arg1 fileSequence:(id)arg2 totalFiles:(id)arg3 testId:(id)arg4 dataId:(id)arg5 sessionId:(id)arg6 completion:(id /* block */)arg7;
- (BOOL)postProfile:(id)arg1 sessionId:(id)arg2;
- (id)postRequest:(id)arg1 sessionId:(id)arg2;
- (void)postSessionExistsForSerialNumbers:(id)arg1 ticket:(id)arg2 timeout:(double)arg3 completion:(id /* block */)arg4;
- (void)postTestResult:(id)arg1 sessionId:(id)arg2 completion:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)setNetworking:(id)arg1;

@end
