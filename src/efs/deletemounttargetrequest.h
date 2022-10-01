// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMOUNTTARGETREQUEST_H
#define QTAWS_DELETEMOUNTTARGETREQUEST_H

#include "efsrequest.h"

namespace QtAws {
namespace Efs {

class DeleteMountTargetRequestPrivate;

class QTAWSEFS_EXPORT DeleteMountTargetRequest : public EfsRequest {

public:
    DeleteMountTargetRequest(const DeleteMountTargetRequest &other);
    DeleteMountTargetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMountTargetRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
