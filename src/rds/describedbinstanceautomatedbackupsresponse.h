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

#ifndef QTAWS_DESCRIBEDBINSTANCEAUTOMATEDBACKUPSRESPONSE_H
#define QTAWS_DESCRIBEDBINSTANCEAUTOMATEDBACKUPSRESPONSE_H

#include "rdsresponse.h"
#include "describedbinstanceautomatedbackupsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBInstanceAutomatedBackupsResponsePrivate;

class QTAWSRDS_EXPORT DescribeDBInstanceAutomatedBackupsResponse : public RdsResponse {
    Q_OBJECT

public:
    DescribeDBInstanceAutomatedBackupsResponse(const DescribeDBInstanceAutomatedBackupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDBInstanceAutomatedBackupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBInstanceAutomatedBackupsResponse)
    Q_DISABLE_COPY(DescribeDBInstanceAutomatedBackupsResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
