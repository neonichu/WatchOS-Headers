//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSString;

@interface NMSWindowData : NSObject
{
    NSString *_path;
    struct __CFString *_loggingFacility;
    struct sqlite3 *_db;
    struct sqlite3_stmt *_addMessageInFlight;
    struct sqlite3_stmt *_getMessageLength;
    struct sqlite3_stmt *_removeMessageInFlight;
    struct sqlite3_stmt *_getNextExpireDate;
    struct sqlite3_stmt *_getExpiredMessageIDs;
    struct sqlite3_stmt *_getBytesInFlight;
    struct sqlite3_stmt *_getCountInFlight;
    struct sqlite3_stmt *_pushPendingMessage;
    struct sqlite3_stmt *_getPendingMessage;
    struct sqlite3_stmt *_popPendingMessage;
    struct sqlite3_stmt *_countPendingMessages;
}

- (void).cxx_destruct;
- (struct sqlite3 *)dbRef;
@property(readonly, nonatomic) unsigned long long countOfPendingMessages;
- (id)popPendingMessage;
- (void)pushPendingMessageData:(id)arg1 timeToLive:(double)arg2;
@property(readonly, nonatomic) NSDate *dateOfNextMessageExpiry;
@property(readonly, nonatomic) unsigned long long countOfAllMessagesInFlight;
@property(readonly, nonatomic) unsigned long long lengthOfAllMessagesInFlight;
@property(readonly, nonatomic) NSArray *expiredMessageIDs;
- (unsigned long long)removeAndReturnLengthOfMessageWithID:(id)arg1;
- (void)addMessageWithID:(id)arg1 ofLength:(unsigned long long)arg2 timeoutTime:(double)arg3;
- (_Bool)_openDBForceRecreate:(_Bool)arg1;
- (int)_getSchemaVersion;
- (void)dealloc;
- (id)initWithPath:(id)arg1 logFacility:(struct __CFString *)arg2;
- (id)init;

@end

