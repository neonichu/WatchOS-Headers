//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError, NSObject<OS_dispatch_queue>, NSSet, NSString, NSTimer;

@interface SYPersistentStore : NSObject
{
    NSString *_path;
    struct __CFString *_loggingFacility;
    double _timeToLiveCache;
    _Bool _changeTrackingEnabled;
    NSObject<OS_dispatch_queue> *_syncQ;
    struct sqlite3 *_db;
    struct sqlite3_stmt *_getInFullSync;
    struct sqlite3_stmt *_getChangeCount;
    struct sqlite3_stmt *_getNextExpireTime;
    struct sqlite3_stmt *_purgeExpiredChanges;
    struct sqlite3_stmt *_insertChange;
    struct sqlite3_stmt *_getFullsyncSent;
    struct sqlite3_stmt *_setFullsyncSent;
    struct sqlite3_stmt *_logSyncComplete;
    struct sqlite3_stmt *_getChangeIDsSinceVersion;
    struct sqlite3_stmt *_getLocalVersion;
    struct sqlite3_stmt *_getOldestVersion;
    struct sqlite3_stmt *_setVectorClock;
    struct sqlite3_stmt *_setPeerSeqNo;
    struct sqlite3_stmt *_getPeerSeqNo;
    struct sqlite3_stmt *_enterFullSync;
    struct sqlite3_stmt *_exitFullSync;
    struct sqlite3_stmt *_getIgnoringSyncID;
    struct sqlite3_stmt *_getCurrentSyncID;
    struct sqlite3_stmt *_getLastEndedSyncID;
    struct sqlite3_stmt *_getWaitingForSyncID;
    struct sqlite3_stmt *_setWaitingForSyncID;
    struct sqlite3_stmt *_setAllSentForSyncID;
    struct sqlite3_stmt *_getAllSentForCurrentSync;
    struct sqlite3_stmt *_getLastSyncError;
    struct sqlite3_stmt *_setSyncUserInfo;
    struct sqlite3_stmt *_getSyncUserInfo;
    struct sqlite3_stmt *_setSyncIDSOptions;
    struct sqlite3_stmt *_getSyncIDSOptions;
    _Bool _cachedVersionStale;
    NSString *_peerID;
    NSSet *_cachedChangedSyncIDs;
    unsigned long long _cachedChangedSyncIDsVersion;
    NSTimer *_expirationTimer;
}

@property(retain, nonatomic) NSTimer *expirationTimer; // @synthesize expirationTimer=_expirationTimer;
@property(nonatomic) _Bool cachedVersionStale; // @synthesize cachedVersionStale=_cachedVersionStale;
@property(nonatomic) unsigned long long cachedChangedSyncIDsVersion; // @synthesize cachedChangedSyncIDsVersion=_cachedChangedSyncIDsVersion;
@property(retain, nonatomic) NSSet *cachedChangedSyncIDs; // @synthesize cachedChangedSyncIDs=_cachedChangedSyncIDs;
@property(readonly, nonatomic) NSString *peerID; // @synthesize peerID=_peerID;
- (void).cxx_destruct;
- (void)changeTrackingToggled:(_Bool)arg1;
- (_Bool)objectChanged:(id)arg1 sinceVersion:(unsigned long long)arg2;
- (unsigned long long)_oldestVersion;
- (_Bool)logSyncCompletionToRemoteVersion:(unsigned long long)arg1;
- (_Bool)logChanges:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) unsigned long long lastSeenRemoteVersion;
@property(readonly, nonatomic) unsigned long long currentLocalVersion;
@property(nonatomic) _Bool completedSync;
@property(copy, nonatomic) NSDictionary *fullSyncIDSOptions;
@property(copy, nonatomic) NSDictionary *fullSyncUserInfo;
@property(copy, nonatomic) NSString *waitingForSyncEndID;
@property(readonly, nonatomic) NSString *lastSyncEndID;
@property(readonly, nonatomic) _Bool inFullSync;
@property(readonly, nonatomic) NSString *currentFullSyncID;
@property(readonly, nonatomic) NSError *lastSyncError;
@property(readonly, nonatomic) _Bool lastSyncFailed;
@property(readonly, nonatomic) _Bool currentSyncSendComplete;
- (void)sendCompletedForSyncWithID:(id)arg1;
- (_Bool)ignoringFullSyncWithID:(id)arg1;
- (_Bool)reassignCurrentSyncID:(id)arg1;
- (void)exitFullSyncWithID:(id)arg1 error:(id)arg2;
- (void)enterFullSyncWithID:(id)arg1 ignoring:(_Bool)arg2;
@property(retain, nonatomic) NSString *vectorClockJSON;
@property(readonly, nonatomic) unsigned long long changeCount;
- (void)expirationTimerFired:(id)arg1;
- (void)setExpirationTimer;
- (void)expireChanges;
@property(nonatomic) double timeToLive;
@property(readonly, nonatomic) NSString *path;
- (unsigned long long)lastSequenceNumberForPeerID:(id)arg1;
- (void)setLastSequenceNumber:(unsigned long long)arg1 fromPeer:(id)arg2;
- (unsigned long long)nextSequenceNumber;
- (void)_cacheTTL;
- (void)_fixPeerInfo;
- (_Bool)_inTransaction:(_Bool)arg1 do:(CDUnknownBlockType)arg2;
- (void)_convertTimestamps;
- (_Bool)_openDBAtPath:(id)arg1;
- (int)_getSchemaVersion;
- (_Bool)_tableEmpty:(id)arg1;
- (struct sqlite3 *)_dbRef;
- (void)dealloc;
- (id)initWithPath:(id)arg1 loggingFacility:(struct __CFString *)arg2 changeTrackingEnabled:(_Bool)arg3;

@end

