/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@class NSMutableArray, NSString;

@interface PLSQLStatement : NSObject {
    NSMutableArray *_boundObjects;
    struct sqlite3 { } *_dbConnection;
    NSString *_sqlQuery;
    struct sqlite3_stmt { } *_statement;
    NSString *_syncObject;
    bool_isDelete;
    bool_isInsert;
}

@property(retain) NSMutableArray * boundObjects;
@property struct sqlite3 { }* dbConnection;
@property(readonly) bool isDelete;
@property(readonly) bool isInsert;
@property(retain) NSString * sqlQuery;
@property struct sqlite3_stmt { }* statement;
@property(retain) NSString * syncObject;

- (void).cxx_destruct;
- (int)bindValue:(id)arg1 withFormater:(short)arg2 atPosition:(int)arg3;
- (id)boundObjects;
- (struct sqlite3 { }*)dbConnection;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)initWithSQLQuery:(id)arg1 forDatabase:(struct sqlite3 { }*)arg2 withSyncObject:(id)arg3 result:(int*)arg4;
- (bool)isDelete;
- (bool)isInsert;
- (id)perform;
- (void)reset;
- (void)setBoundObjects:(id)arg1;
- (void)setDbConnection:(struct sqlite3 { }*)arg1;
- (void)setSqlQuery:(id)arg1;
- (void)setStatement:(struct sqlite3_stmt { }*)arg1;
- (void)setSyncObject:(id)arg1;
- (id)sqlQuery;
- (struct sqlite3_stmt { }*)statement;
- (id)syncObject;

@end