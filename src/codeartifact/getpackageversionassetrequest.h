// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPACKAGEVERSIONASSETREQUEST_H
#define QTAWS_GETPACKAGEVERSIONASSETREQUEST_H

#include "codeartifactrequest.h"

namespace QtAws {
namespace CodeArtifact {

class GetPackageVersionAssetRequestPrivate;

class QTAWSCODEARTIFACT_EXPORT GetPackageVersionAssetRequest : public CodeArtifactRequest {

public:
    GetPackageVersionAssetRequest(const GetPackageVersionAssetRequest &other);
    GetPackageVersionAssetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPackageVersionAssetRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
