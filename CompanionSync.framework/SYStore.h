//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSServiceDelegate.h"
#import "NMSMessageCenterDelegate.h"
#import "SYChangeTracking.h"

@class NMSMessageCenter, NSDictionary, NSMutableDictionary, NSMutableIndexSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, NSUUID, SYPersistentStore, SYRetryTimer, SYVectorClock;

@interface SYStore : NSObject <IDSServiceDelegate, NMSMessageCenterDelegate, SYChangeTracking>
{
    NSObject<OS_dispatch_queue> *_qosTargetQueue;
    unsigned long long _batchCounter;
    NSMutableIndexSet *_batchChunkUnackedIndices;
    _Bool _tracksChanges;
    NSMutableDictionary *_sendSignals;
    SYRetryTimer *_syncRetryTimer;
    NSObject<OS_dispatch_source> *_overflowRetryTimer;
    struct {
        unsigned int delegateWillUpdate:1;
        unsigned int delegateWillUpdateWithCount:1;
        unsigned int delegateDidUpdate:1;
        unsigned int delegateDidCompleteFullSync:1;
        unsigned int delegateAllObjectsDeleted:1;
        unsigned int delegateAllObjects:1;
        unsigned int delegateShouldPerformInitialSync:1;
        unsigned int delegateBeginSyncingAllObjects:1;
        unsigned int delegateShouldDeleteOnFailedSync:1;
        unsigned int delegateErrorInFullSync:1;
        unsigned int delegateStoreEncounteredError:1;
        unsigned int delegateDidPair:1;
        unsigned int delegateDidUnpair:1;
        unsigned int delegateSentMessage:1;
        unsigned int delegatePeerProcessedMessage:1;
        unsigned int delegateSentLastSyncMessage:1;
    } _flags;
    _Bool _allowsDeletes;
    _Bool _encryptPayloads;
    _Bool _alwaysWins;
    _Bool _registeredNotificationHandlers;
    _Bool _fullSyncWasRequestedBySlave;
    id <SYStoreDelegate> _delegate;
    id <SYSerialization> _serializer;
    NSDictionary *_customIDSDeliveryOptions;
    NSString *_service;
    NSString *_databaseFileName;
    long long _priority;
    SYPersistentStore *_persistentStore;
    NSObject<OS_dispatch_queue> *_queue;
    struct __CFString *_loggingFacility;
    NSUUID *_pairedDeviceID;
    NMSMessageCenter *_messageCenter;
    SYVectorClock *_vectorClock;
    CDUnknownBlockType _nextBatchStep;
}

+ (id)fullSyncActivityDictionary;
@property(copy, nonatomic) CDUnknownBlockType nextBatchStep; // @synthesize nextBatchStep=_nextBatchStep;
@property(nonatomic) _Bool fullSyncWasRequestedBySlave; // @synthesize fullSyncWasRequestedBySlave=_fullSyncWasRequestedBySlave;
@property(retain, nonatomic) SYVectorClock *vectorClock; // @synthesize vectorClock=_vectorClock;
@property(retain, nonatomic) NMSMessageCenter *messageCenter; // @synthesize messageCenter=_messageCenter;
@property(nonatomic) _Bool registeredNotificationHandlers; // @synthesize registeredNotificationHandlers=_registeredNotificationHandlers;
@property(retain, nonatomic) NSUUID *pairedDeviceID; // @synthesize pairedDeviceID=_pairedDeviceID;
@property(nonatomic) struct __CFString *loggingFacility; // @synthesize loggingFacility=_loggingFacility;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) SYPersistentStore *persistentStore; // @synthesize persistentStore=_persistentStore;
@property(nonatomic) _Bool alwaysWins; // @synthesize alwaysWins=_alwaysWins;
@property(nonatomic) _Bool encryptPayloads; // @synthesize encryptPayloads=_encryptPayloads;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSString *databaseFileName; // @synthesize databaseFileName=_databaseFileName;
@property(retain, nonatomic) NSString *service; // @synthesize service=_service;
@property(nonatomic) _Bool allowsDeletes; // @synthesize allowsDeletes=_allowsDeletes;
@property(copy, nonatomic) NSDictionary *customIDSDeliveryOptions; // @synthesize customIDSDeliveryOptions=_customIDSDeliveryOptions;
@property(retain, nonatomic) id <SYSerialization> serializer; // @synthesize serializer=_serializer;
@property(nonatomic) __weak id <SYStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)encodeSYObject:(id)arg1;
- (id)decodeSYObject:(id)arg1;
- (_Bool)objectChanged:(id)arg1 sinceVersion:(unsigned long long)arg2;
- (void)performFullSync;
- (void)performFullSyncToCurrentDBVersion;
- (void)performFullSyncIfNecessary;
- (void)performFullSyncIfNecessaryAskingDelegate:(_Bool)arg1;
- (void)remoteStoreRequestFullSync;
- (void)remoteStoreAllObjects:(id)arg1 fromPeer:(id)arg2 clock:(id)arg3;
- (void)setNeedsFullSyncWithContext:(id)arg1 idsOptions:(id)arg2;
- (void)setNeedsFullSync;
- (void)logChanges:(id)arg1;
- (void)sendChanges:(id)arg1 context:(id)arg2 options:(id)arg3 sentSignal:(id)arg4;
- (void)handleObjectChanges:(id)arg1 contextInfo:(id)arg2 idsOptions:(id)arg3 blockUntilSent:(_Bool)arg4;
- (void)deleteObject:(id)arg1 context:(id)arg2;
- (void)deleteObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteObject:(id)arg1;
- (void)deleteObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (void)updateObject:(id)arg1 context:(id)arg2;
- (void)updateObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateObject:(id)arg1;
- (void)updateObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (void)addObject:(id)arg1 context:(id)arg2;
- (void)addObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addObject:(id)arg1;
- (void)addObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (void)transaction:(CDUnknownBlockType)arg1 context:(id)arg2 idsOptions:(id)arg3 blockUntilSent:(_Bool)arg4;
- (void)blockingTransaction:(CDUnknownBlockType)arg1;
- (void)transaction:(CDUnknownBlockType)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (void)transaction:(CDUnknownBlockType)arg1 context:(id)arg2;
- (void)transaction:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)transaction:(CDUnknownBlockType)arg1;
- (id)newMessageHeader;
- (void)sendMessage:(id)arg1 ofType:(unsigned short)arg2 respondingTo:(id)arg3 userInfo:(id)arg4 idsOptions:(id)arg5;
- (id)wrapMessage:(id)arg1 ofType:(unsigned short)arg2 respondingTo:(id)arg3 userInfo:(id)arg4;
- (void)messageCenter:(id)arg1 didSuccessfullyDeliverRequestWithIdentifier:(id)arg2 userInfo:(id)arg3;
- (void)messageCenter:(id)arg1 didSuccessfullySendRequestWithIdentifier:(id)arg2 userInfo:(id)arg3;
- (void)messageCenter:(id)arg1 didResolveIDSIdentifier:(id)arg2 forResponse:(id)arg3;
- (void)messageCenter:(id)arg1 didResolveIDSIdentifierForRequest:(id)arg2;
- (void)messageCenter:(id)arg1 didReceiveUnknownRequest:(id)arg2;
- (void)handleChangeMessage:(id)arg1;
- (void)handleBatchSyncEnd:(id)arg1 response:(id)arg2;
- (void)handleBatchSyncChunk:(id)arg1 response:(id)arg2;
- (void)handleBatchSyncStart:(id)arg1;
- (void)handleSyncAllObjects:(id)arg1 response:(id)arg2;
- (void)_syncEndedWithSyncID:(id)arg1;
- (_Bool)_shouldSkipNonSyncMessages;
- (_Bool)_shouldIgnoreSyncID:(id)arg1;
- (void)handleFullSyncRequest:(id)arg1 response:(id)arg2;
- (_Bool)peerState:(id)arg1 fromPeer:(id)arg2 matchesExpectationForChangeCount:(unsigned long long)arg3 offsetAmount:(unsigned long long *)arg4;
- (void)_copyPeerClockFromMessageHeaderIfNecessary:(id)arg1;
- (void)postUserNotification:(id)arg1 message:(id)arg2;
- (_Bool)inFullSync;
@property(nonatomic) double timeToLive;
- (void)setupDatabase;
- (void)_setupMessageCenter_LOCKED;
- (void)setupMessageCenter;
- (void)_handleIDSOverflow;
- (void)_recordLastSeqNo:(id)arg1;
- (_Bool)_checkMessageHeader:(id)arg1 messageID:(id)arg2;
- (id)_pathForMessageCenterCache;
- (void)_vectorClockUpdated;
- (void)_devicePaired:(id)arg1;
- (void)_deviceUnpaired:(id)arg1;
- (_Bool)_isUsingGenericCache;
- (_Bool)_isPairedWithDevice:(id)arg1;
@property(nonatomic) long long maxBytesInFlight;
@property(readonly, nonatomic) long long state;
@property(nonatomic) unsigned int deliveryQOS;
@property(readonly, nonatomic, getter=isPaired) _Bool paired;
- (void)setupPairingNotifications;
- (void)_listenForPrefsChangeNotifications;
- (void)_updateMessageCenterPrefs:(id)arg1;
- (void)_prefsChanged;
- (id)_batchChunkUnackedIndices;
- (void)dealloc;
- (id)initWithService:(id)arg1 isGStore:(_Bool)arg2 priority:(long long)arg3 isMasterStore:(_Bool)arg4 tracksChanges:(_Bool)arg5;
- (id)initWithService:(id)arg1 isGStore:(_Bool)arg2 highPriority:(_Bool)arg3 isMasterStore:(_Bool)arg4 tracksChanges:(_Bool)arg5;
- (id)initWithService:(id)arg1 isGStore:(_Bool)arg2 priority:(long long)arg3 isMasterStore:(_Bool)arg4;
- (id)initWithService:(id)arg1 isGStore:(_Bool)arg2 highPriority:(_Bool)arg3 isMasterStore:(_Bool)arg4;
- (id)initWithService:(id)arg1 isGStore:(_Bool)arg2 highPriority:(_Bool)arg3;
- (id)initWithService:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 isGStore:(_Bool)arg2 highPriority:(_Bool)arg3;
- (id)initWithBundleIdentifier:(id)arg1;
- (void)_retrySync;
- (id)newFullSyncContext;
- (void)processBatchChunkAck:(unsigned int)arg1;
- (void)processBatchChunkAtIndex:(unsigned int)arg1 encodedObjects:(id)arg2 error:(id *)arg3;
- (void)processBatchSyncEnd:(unsigned long long)arg1;
- (void)processBatchSyncStart;
- (_Bool)performBatchedSyncToCurrentDBVersion;
- (void)_sendBatchChunk:(id)arg1 withState:(id)arg2 then:(CDUnknownBlockType)arg3;
- (void)_restartBatchSyncWithState:(id)arg1 then:(CDUnknownBlockType)arg2;
- (void)_postBatchEndMessageWithState:(id)arg1 error:(id)arg2 then:(CDUnknownBlockType)arg3;
- (void)_postBatchStartMessageWithState:(id)arg1 then:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool tracksChanges;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

