//
//  MyViewController.h
//  约球
//
//  Created by 张佳乔 on 2022/1/1.
//

#import <UIKit/UIKit.h>
#import "MyTableViewCell.h"

NS_ASSUME_NONNULL_BEGIN

@interface MyViewController : UIViewController<UITableViewDelegate,
UITableViewDataSource, UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (nonatomic, strong) UITableView* tableView;
@property (nonatomic, strong) MyTableViewCell *myCell;
@property (nonatomic, strong) NSArray* menuArray;
@property (nonatomic, strong) NSString *onlyUid;  //唯一的uid

//类方法  图片 转换为二进制
+ (NSData *)Image_TransForm_Data:(UIImage *)image;

@end

NS_ASSUME_NONNULL_END
