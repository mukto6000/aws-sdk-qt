// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVICEUPDATESRESPONSE_H
#define QTAWS_DESCRIBESERVICEUPDATESRESPONSE_H

#include "memorydbresponse.h"
#include "describeserviceupdatesrequest.h"

namespace QtAws {
namespace MemoryDb {

class DescribeServiceUpdatesResponsePrivate;

class QTAWSMEMORYDB_EXPORT DescribeServiceUpdatesResponse : public MemoryDbResponse {
    Q_OBJECT

public:
    DescribeServiceUpdatesResponse(const DescribeServiceUpdatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeServiceUpdatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeServiceUpdatesResponse)
    Q_DISABLE_COPY(DescribeServiceUpdatesResponse)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
