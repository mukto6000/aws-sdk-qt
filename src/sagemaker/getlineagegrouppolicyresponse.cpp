// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlineagegrouppolicyresponse.h"
#include "getlineagegrouppolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::GetLineageGroupPolicyResponse
 * \brief The GetLineageGroupPolicyResponse class provides an interace for SageMaker GetLineageGroupPolicy responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::getLineageGroupPolicy
 */

/*!
 * Constructs a GetLineageGroupPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetLineageGroupPolicyResponse::GetLineageGroupPolicyResponse(
        const GetLineageGroupPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new GetLineageGroupPolicyResponsePrivate(this), parent)
{
    setRequest(new GetLineageGroupPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLineageGroupPolicyRequest * GetLineageGroupPolicyResponse::request() const
{
    Q_D(const GetLineageGroupPolicyResponse);
    return static_cast<const GetLineageGroupPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker GetLineageGroupPolicy \a response.
 */
void GetLineageGroupPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLineageGroupPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::GetLineageGroupPolicyResponsePrivate
 * \brief The GetLineageGroupPolicyResponsePrivate class provides private implementation for GetLineageGroupPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a GetLineageGroupPolicyResponsePrivate object with public implementation \a q.
 */
GetLineageGroupPolicyResponsePrivate::GetLineageGroupPolicyResponsePrivate(
    GetLineageGroupPolicyResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker GetLineageGroupPolicy response element from \a xml.
 */
void GetLineageGroupPolicyResponsePrivate::parseGetLineageGroupPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLineageGroupPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
