// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFILESYSTEMRESPONSE_P_H
#define QTAWS_DELETEFILESYSTEMRESPONSE_P_H

#include "efsresponse_p.h"

namespace QtAws {
namespace Efs {

class DeleteFileSystemResponse;

class DeleteFileSystemResponsePrivate : public EfsResponsePrivate {

public:

    explicit DeleteFileSystemResponsePrivate(DeleteFileSystemResponse * const q);

    void parseDeleteFileSystemResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFileSystemResponse)
    Q_DISABLE_COPY(DeleteFileSystemResponsePrivate)

};

} // namespace Efs
} // namespace QtAws

#endif
