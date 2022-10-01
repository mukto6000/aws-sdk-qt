// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUNFILTEREDPARTITIONSMETADATAREQUEST_H
#define QTAWS_GETUNFILTEREDPARTITIONSMETADATAREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetUnfilteredPartitionsMetadataRequestPrivate;

class QTAWSGLUE_EXPORT GetUnfilteredPartitionsMetadataRequest : public GlueRequest {

public:
    GetUnfilteredPartitionsMetadataRequest(const GetUnfilteredPartitionsMetadataRequest &other);
    GetUnfilteredPartitionsMetadataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUnfilteredPartitionsMetadataRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
