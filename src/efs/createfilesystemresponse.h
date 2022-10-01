// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFILESYSTEMRESPONSE_H
#define QTAWS_CREATEFILESYSTEMRESPONSE_H

#include "efsresponse.h"
#include "createfilesystemrequest.h"

namespace QtAws {
namespace Efs {

class CreateFileSystemResponsePrivate;

class QTAWSEFS_EXPORT CreateFileSystemResponse : public EfsResponse {
    Q_OBJECT

public:
    CreateFileSystemResponse(const CreateFileSystemRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFileSystemRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFileSystemResponse)
    Q_DISABLE_COPY(CreateFileSystemResponse)

};

} // namespace Efs
} // namespace QtAws

#endif
