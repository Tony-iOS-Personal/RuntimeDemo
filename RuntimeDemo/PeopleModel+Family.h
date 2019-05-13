//
//  PeopleModel+Test.h
//  RuntimeDemo
//
//  Created by 邵广涛 on 2019/4/29.
//  Copyright © 2019 SGT. All rights reserved.
//

#import "PeopleModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface PeopleModel (Family)

//父亲名字
@property (nonatomic,copy)NSString *fatherName;

//母亲名字
@property (nonatomic,copy)NSString *motherName;

@end

NS_ASSUME_NONNULL_END
