// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFILESYSTEMRESPONSE_H
#define QTAWS_UPDATEFILESYSTEMRESPONSE_H

#include "efsresponse.h"
#include "updatefilesystemrequest.h"

namespace QtAws {
namespace Efs {

class UpdateFileSystemResponsePrivate;

class QTAWSEFS_EXPORT UpdateFileSystemResponse : public EfsResponse {
    Q_OBJECT

public:
    UpdateFileSystemResponse(const UpdateFileSystemRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFileSystemRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFileSystemResponse)
    Q_DISABLE_COPY(UpdateFileSystemResponse)

};

} // namespace Efs
} // namespace QtAws

#endif
