// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYBACKUPRESPONSE_P_H
#define QTAWS_COPYBACKUPRESPONSE_P_H

#include "fsxresponse_p.h"

namespace QtAws {
namespace FSx {

class CopyBackupResponse;

class CopyBackupResponsePrivate : public FSxResponsePrivate {

public:

    explicit CopyBackupResponsePrivate(CopyBackupResponse * const q);

    void parseCopyBackupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CopyBackupResponse)
    Q_DISABLE_COPY(CopyBackupResponsePrivate)

};

} // namespace FSx
} // namespace QtAws

#endif
