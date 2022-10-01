// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPACKAGEVERSIONRESPONSE_H
#define QTAWS_DESCRIBEPACKAGEVERSIONRESPONSE_H

#include "codeartifactresponse.h"
#include "describepackageversionrequest.h"

namespace QtAws {
namespace CodeArtifact {

class DescribePackageVersionResponsePrivate;

class QTAWSCODEARTIFACT_EXPORT DescribePackageVersionResponse : public CodeArtifactResponse {
    Q_OBJECT

public:
    DescribePackageVersionResponse(const DescribePackageVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePackageVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePackageVersionResponse)
    Q_DISABLE_COPY(DescribePackageVersionResponse)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
