// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERPROFILERESPONSE_H
#define QTAWS_DELETEUSERPROFILERESPONSE_H

#include "sagemakerresponse.h"
#include "deleteuserprofilerequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteUserProfileResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DeleteUserProfileResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DeleteUserProfileResponse(const DeleteUserProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteUserProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUserProfileResponse)
    Q_DISABLE_COPY(DeleteUserProfileResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
