/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_GETBACKUPSELECTIONRESPONSE_H
#define QTAWS_GETBACKUPSELECTIONRESPONSE_H

#include "backupresponse.h"
#include "getbackupselectionrequest.h"

namespace QtAws {
namespace Backup {

class GetBackupSelectionResponsePrivate;

class QTAWS_EXPORT GetBackupSelectionResponse : public BackupResponse {
    Q_OBJECT

public:
    GetBackupSelectionResponse(const GetBackupSelectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBackupSelectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBackupSelectionResponse)
    Q_DISABLE_COPY(GetBackupSelectionResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
