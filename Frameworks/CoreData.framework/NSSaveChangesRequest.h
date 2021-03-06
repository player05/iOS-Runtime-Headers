/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSaveChangesRequest : NSPersistentStoreRequest {
    NSSet * _deletedObjects;
    unsigned long  _flags;
    NSSet * _insertedObjects;
    NSSet * _optimisticallyLockedObjects;
    void * _reserved1;
    NSSet * _updatedObjects;
}

@property (readonly) NSSet *deletedObjects;
@property (readonly) NSSet *insertedObjects;
@property (readonly) NSSet *lockedObjects;
@property (readonly) NSSet *updatedObjects;

+ (void)initialize;

- (BOOL)_retryHandlerCount;
- (BOOL)_secureOperation;
- (void)_setRetryHandlerCount:(BOOL)arg1;
- (void)_setSecureOperation:(BOOL)arg1;
- (void)dealloc;
- (id)deletedObjects;
- (id)description;
- (BOOL)hasChanges;
- (id)init;
- (id)initWithInsertedObjects:(id)arg1 updatedObjects:(id)arg2 deletedObjects:(id)arg3 lockedObjects:(id)arg4;
- (id)insertedObjects;
- (id)lockedObjects;
- (unsigned int)requestType;
- (void)setDeletedObjects:(id)arg1;
- (id)updatedObjects;

@end
