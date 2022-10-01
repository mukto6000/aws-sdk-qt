// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCESSCONTROLCONFIGURATIONSREQUEST_H
#define QTAWS_LISTACCESSCONTROLCONFIGURATIONSREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class ListAccessControlConfigurationsRequestPrivate;

class QTAWSKENDRA_EXPORT ListAccessControlConfigurationsRequest : public KendraRequest {

public:
    ListAccessControlConfigurationsRequest(const ListAccessControlConfigurationsRequest &other);
    ListAccessControlConfigurationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccessControlConfigurationsRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
