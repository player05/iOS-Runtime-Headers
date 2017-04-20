/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKAppLibrary : NSObject <LSApplicationWorkspaceObserverProtocol> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSArray * _allAppBundleIdentifiers;
    BOOL  _appLibraryNeedsRefresh;
    int  _ignoreAppLibraryChangesCount;
    NSArray * _installedAppBundleIdentifiers;
    NSObject<OS_dispatch_queue> * _refreshQueue;
    NSArray * _subscribedAppBundleIdentifiers;
    NSDictionary * _subscriptionInfoByIdentifier;
    PSSSSubscriptionManagerInternal * _subscriptionManager;
    NSArray * _testAppBundleIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)defaultAppLibrary;
+ (id)localizedNameForBundle:(id)arg1;

- (void).cxx_destruct;
- (id)_refreshAppLibrary;
- (void)_subscriptionsDidChangeNotification:(id)arg1;
- (id)allAppBundleIdentifiers;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)beginIgnoringAppLibraryChanges;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)endIgnoringAppLibraryChanges;
- (id)init;
- (id)installedAppBundleIdentifiers;
- (id)refresh;
- (id)subscribedAppBundleIdentifiers;
- (id)subscriptionInfoByBundleIdentifier;
- (id)testAppBundleIdentifiers;

@end