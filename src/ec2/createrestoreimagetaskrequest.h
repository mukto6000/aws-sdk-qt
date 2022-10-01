// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESTOREIMAGETASKREQUEST_H
#define QTAWS_CREATERESTOREIMAGETASKREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateRestoreImageTaskRequestPrivate;

class QTAWSEC2_EXPORT CreateRestoreImageTaskRequest : public Ec2Request {

public:
    CreateRestoreImageTaskRequest(const CreateRestoreImageTaskRequest &other);
    CreateRestoreImageTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRestoreImageTaskRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
