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

#ifndef QTAWS_CREATEGLOBALCLUSTERRESPONSE_H
#define QTAWS_CREATEGLOBALCLUSTERRESPONSE_H

#include "rdsresponse.h"
#include "createglobalclusterrequest.h"

namespace QtAws {
namespace RDS {

class CreateGlobalClusterResponsePrivate;

class QTAWSRDS_EXPORT CreateGlobalClusterResponse : public RdsResponse {
    Q_OBJECT

public:
    CreateGlobalClusterResponse(const CreateGlobalClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateGlobalClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGlobalClusterResponse)
    Q_DISABLE_COPY(CreateGlobalClusterResponse)

};

} // namespace RDS
} // namespace QtAws

#endif
