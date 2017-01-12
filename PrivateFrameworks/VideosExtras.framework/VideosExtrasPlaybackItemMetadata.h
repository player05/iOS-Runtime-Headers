/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosExtrasPlaybackItemMetadata : MPMediaLibraryPlaybackItemMetadata {
    NSString * _buyParameters;
    unsigned int  _mediaType;
    long long  _storeAdamID;
}

- (void).cxx_destruct;
- (BOOL)_calculateAllowsCellularNetworking;
- (void)_videosPlaybackSettingsChanged:(id)arg1;
- (BOOL)allowsInitiatingPlayWhileDownload;
- (id)buyParameters;
- (unsigned int)contentType;
- (unsigned int)hash;
- (id)initWithStoreAdamID:(long long)arg1 buyParameters:(id)arg2 mediaType:(unsigned int)arg3;
- (BOOL)isEqual:(id)arg1;
- (long long)storeAdamID;

@end