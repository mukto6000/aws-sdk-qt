// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBRANCHRESPONSE_H
#define QTAWS_UPDATEBRANCHRESPONSE_H

#include "amplifyresponse.h"
#include "updatebranchrequest.h"

namespace QtAws {
namespace Amplify {

class UpdateBranchResponsePrivate;

class QTAWSAMPLIFY_EXPORT UpdateBranchResponse : public AmplifyResponse {
    Q_OBJECT

public:
    UpdateBranchResponse(const UpdateBranchRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateBranchRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBranchResponse)
    Q_DISABLE_COPY(UpdateBranchResponse)

};

} // namespace Amplify
} // namespace QtAws

#endif
