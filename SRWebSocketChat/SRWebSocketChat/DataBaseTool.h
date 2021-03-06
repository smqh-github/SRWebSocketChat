//
//  DataBaseTool.h
//  SRWebSocketChat
//
//  Created by Madis on 16/5/13.
//
//

#import <Foundation/Foundation.h>

@interface DataBaseTool : NSObject

+ (id)shareInstance;
//创建数据库
//- (BOOL)getDBFilePathWithFileName:(NSString *)fileName;
//创建表(同时创建数据库)
- (BOOL)createDBTable:(NSString *)sqlString;
//插入数据
- (BOOL)insertDataWithTable:(NSString *)sqlString;
//删除语句
- (BOOL)deleteDataWithTable:(NSString *)sqlString;

//- (BOOL)insertDataWithStringArray:(NSMutableArray *)array;
//查询数据
- (NSMutableArray *)queryDataWithTable:(NSString *)sqlString withDataObject:(NSString *)object;

//归档
- (BOOL)setUserDefaultsWithObjectArray:(NSArray *)objectArray keyArray:(NSArray *)keyArray;
- (BOOL)archiverWithObjectArray:(NSArray *)objectArray keyArray:(NSArray *)keyArray;
//解档
- (NSMutableArray * )getUserDefaultsWithKeyArray:(NSArray *)keyArray;
- (NSMutableArray *)unarchiverWithKeyArray:(NSArray *)keyArray;

@end
